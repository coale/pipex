/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:11:08 by aconta            #+#    #+#             */
/*   Updated: 2023/02/21 11:18:31 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	file_errors(char *error_message, int exit_code)
{
	ft_printf("%s\n", error_message);
	exit(exit_code);
}

int	open_file(char *argv, int in_or_out)
{
	int	fd;

	if (in_or_out == 0)
	{
		fd = open(argv, O_RDONLY, 0664);
		if (access(argv, F_OK | R_OK) != 0)
			file_errors("Error on input file opening", 127);
		if (fd == -1)
			file_errors("Error on file opening", 127);
		else
			return (fd);
	}
	else
	{
		fd = open(argv, O_CREAT | O_WRONLY, 0664);
		if (fd == -1)
		{
			file_errors("Error on file opening", 127);
		}
		else
		{
			return (fd);
		}
	}
	return (0);
}

char	**get_path(char **envp)
{
	int		i;
	char	**arr_paths;

	i = 0;
	while ((ft_strnstr(envp[i], "PATH", 4) == 0) && envp[i] != NULL)
		i++;
	arr_paths = ft_split(envp[i] + 5, ':');
	return (arr_paths);
}
