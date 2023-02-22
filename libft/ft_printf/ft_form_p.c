/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:11:57 by aconta            #+#    #+#             */
/*   Updated: 2022/10/26 08:42:22 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putx(unsigned long int n)
{
	if (n <= 15)
	{
		if (n <= 9)
			n += 48;
		else
			n += 87;
		write(1, &n, 1);
	}
	else if (n >= 16)
	{
		ft_putx(n / 16);
		ft_putx(n % 16);
	}
}

int	ft_form_p(unsigned long int n)
{
	int	count;

	count = 3;
	if (!n)
	{
		write(1, "(nil)", 5);
		count = 5;
	}
	else
	{
		write(1, "0x", 2);
		ft_putx(n);
	}
	while (n >= 16)
	{
		n = n / 16;
		count++;
	}
	return (count);
}
