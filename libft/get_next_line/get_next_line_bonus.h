/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:53:50 by aconta            #+#    #+#             */
/*   Updated: 2022/12/14 12:51:37 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "functions/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c); */
char	*ft_joinstr(char *s1, char *s2);
char	*get_a_line(char save[]);
char	*get_next_line(int fd);
char	*read_the_file(int fd, char save[]);
char	*save_after_newline(char save[]);

#	endif
