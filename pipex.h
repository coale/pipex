/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:21:24 by aconta            #+#    #+#             */
/*   Updated: 2023/02/21 11:30:17 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "libft/functions/libft.h"
# include "libft/ft_printf/libftprintf.h"

void	file_errors(char *error_message, int exit_code);
char	**get_path(char **envp);
int		open_file(char *argv, int in_or_out);
void	execute_cmd(char *cmd_path, char **cmd_w_flag, char **envp);
void	try_path(char *argv, char **envp);
void	child(int fd_in, int pipe_ends[], char **argv, char **envp);
void	parent(int fd_out, int pipe_ends[], char **argv, char **envp);
void	ft_free(char *strs);
int		ft_printf(const char *str, ...);
char	*get_next_line(int fd);
/*void	ft_strcpy(char *word, char *str, char c, int j);
char	*ft_stralloc(char *str, char c, int *k);
char	**ft_split(char const *str, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlen(const char *str);
*/
#endif
