/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:39:38 by aconta            #+#    #+#             */
/*   Updated: 2022/10/12 14:28:27 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	newstr = malloc(sizeof (char) * (ft_strlen(p1) + ft_strlen(p2) + 1));
	if (!newstr)
	{
		return (0);
	}
	ft_strlcpy(newstr, p1, (ft_strlen(p1) + 1));
	ft_strlcat(newstr, p2, (ft_strlen(p1) + ft_strlen(p2) + 1));
	return (newstr);
}
