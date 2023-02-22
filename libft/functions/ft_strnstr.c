/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:08:45 by aconta            #+#    #+#             */
/*   Updated: 2022/10/12 11:14:21 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;
	char	*big1;
	char	*little1;

	big1 = (char *)big;
	little1 = (char *)little;
	a = 0;
	if (little1[0] == '\0')
		return (big1);
	while (a < len && big1[a] != '\0')
	{
		b = 0;
		while (((big1[a + b] == little1[b]) && (big1[a + b] != '\0'))
			&& (a + b) < len)
		{
			if (little1[b + 1] == '\0')
				return (&big1[a]);
			b++;
		}
		a++;
	}
	return (0);
}
