/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:12:26 by aconta            #+#    #+#             */
/*   Updated: 2022/10/11 16:27:05 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ps;

	ps = (char *)s;
	i = 0;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}
	return (ps);
}
