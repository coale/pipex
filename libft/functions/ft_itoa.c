/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:43:12 by aconta            #+#    #+#             */
/*   Updated: 2022/10/12 10:19:34 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_putnbr(int n, char *str, int c)
{
	str[c] = '\0';
	c--;
	if (n >= 0)
	{
		while (c >= 0)
		{
			str[c] = (n % 10) + 48;
			n = n / 10;
			c--;
		}
	}
	else
	{
		n = -n;
		while (c > 0)
		{
			str[c] = (n % 10) + 48;
			n = n / 10;
			c--;
		}
		str[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	int		temp_num;

	c = 1;
	temp_num = n;
	if (temp_num == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (temp_num < 0)
	{
		temp_num = -temp_num;
		c++;
	}
	while (temp_num >= 10)
	{
		temp_num = temp_num / 10;
		c++;
	}
	str = malloc(sizeof (char) * (c + 1));
	ft_putnbr(n, str, c);
	return (str);
}
