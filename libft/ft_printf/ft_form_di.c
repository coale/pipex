/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:13:01 by aconta            #+#    #+#             */
/*   Updated: 2022/10/25 16:42:59 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		n += 48;
		write(1, &n, 1);
	}
	else if (n >= 10)
	{
		ft_form_di(n / 10);
		ft_form_di(n % 10);
	}
}

int	ft_form_di(int n)
{
	int	count;

	ft_putnbr(n);
	count = 1;
	if (n == -2147483648)
	{
		count = 11;
		return (count);
	}
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
