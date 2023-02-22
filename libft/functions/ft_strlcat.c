/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:30:06 by aconta            #+#    #+#             */
/*   Updated: 2022/10/12 08:49:21 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (dst[i] != '\0' && i < size)
	{
		i += 1;
	}
	while (src[c] != '\0' && (i + c) + 1 < size)
	{
		dst[i + c] = src[c];
		c++;
	}
	if (i < size)
		dst[i + c] = 0;
	return (ft_strlen(src) + i);
}
