/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:50:22 by aconta            #+#    #+#             */
/*   Updated: 2022/10/12 14:23:25 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc(sizeof (char) * (len + 1));
	if (!substr)
		return (0);
	if (start < (len + 1))
		ft_strlcpy(substr, &s[start], (len + 1));
	return (substr);
}
