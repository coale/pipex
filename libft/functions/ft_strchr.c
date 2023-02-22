/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:03:43 by aconta            #+#    #+#             */
/*   Updated: 2022/10/11 18:03:45 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptrs;

	ptrs = (char *) s;
	while (*ptrs != '\0')
	{
		if (*ptrs == c)
		{
			return (ptrs);
		}
		ptrs++;
	}
	if (*ptrs == c)
		return (ptrs);
	return (0);
}
