/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:18:48 by aconta            #+#    #+#             */
/*   Updated: 2023/02/21 11:28:19 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	execute_cmd(char *cmd_path, char **cmd_w_flag, char **envp)
{
	if (execve(cmd_path, cmd_w_flag, envp) == -1)
	{
		free(cmd_w_flag);
		exit(EXIT_FAILURE);
	}
}

void	try_path(char *argv, char **envp)
{
	char	**arr_paths;
	char	*cmd_path;
	char	*add_slash;
	char	**cmd_w_flag;
	int		i;

	arr_paths = get_path(envp);
	cmd_w_flag = ft_split(argv, ' ');
	i = 0;
	while (arr_paths[i])
	{
		add_slash = ft_strjoin(arr_paths[i], "/");
		cmd_path = ft_strjoin(add_slash, cmd_w_flag[0]);
		free(add_slash);
		if (access(cmd_path, F_OK) == 0)
			execute_cmd(cmd_path, cmd_w_flag, envp);
		else
			free(cmd_path);
		i++;
	}
	if (access(cmd_path, F_OK) != 0)
		perror("Command not found");
}

void	child(int fd_in, int pipe_ends[], char **argv, char **envp)
{
	dup2(fd_in, 0);
	close(fd_in);
	dup2(pipe_ends[1], 1);
	close(pipe_ends[1]);
	close(pipe_ends[0]);
	try_path(argv[2], envp);
	exit(EXIT_SUCCESS);
}

void	parent(int fd_out, int pipe_ends[], char **argv, char **envp)
{
	dup2(fd_out, 1);
	close(fd_out);
	dup2(pipe_ends[0], 0);
	close(pipe_ends[0]);
	close(pipe_ends[1]);
	try_path(argv[3], envp);
	exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv, char **envp)
{
	int	pipe_ends[2];
	int	pid;
	int	fd_input;
	int	fd_output;

	(void)envp;
	if (argc == 5)
	{
		if (pipe(pipe_ends) == -1)
			return (-1);
		fd_input = open_file(argv[1], 0);
		fd_output = open_file(argv[4], 1);
		pid = fork();
		if (pid < 0)
			file_errors("Error on fork", -1);
		if (pid == 0)
			child(fd_input, pipe_ends, argv, envp);
		waitpid(pid, NULL, 0);
		parent(fd_output, pipe_ends, argv, envp);
	}
	else
		write(1, "Invalid argument format", 23);
	return (0);
}
