/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:34:52 by aconta            #+#    #+#             */
/*   Updated: 2022/10/19 10:18:54 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*pdest;
	const char		*psrc;

	i = 0;
	pdest = dest;
	psrc = src;
	while (i < n)
	{
		if (&psrc[i] == &pdest[0])
		{
			i = n;
			while (i > 0)
			{
				i--;
				pdest[i] = psrc[i];
			}
			pdest[i] = psrc[i];
			return (dest);
		}
		i++;
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
