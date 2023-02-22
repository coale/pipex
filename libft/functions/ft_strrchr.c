/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:56:12 by aconta            #+#    #+#             */
/*   Updated: 2022/10/11 18:41:50 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptrs;
	int		i;

	ptrs = (char *) s;
	i = 0;
	while (ptrs[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (ptrs[i] == c)
			return (&ptrs[i]);
		i--;
	}
	return (0);
}
