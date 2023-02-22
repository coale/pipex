/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:25:15 by aconta            #+#    #+#             */
/*   Updated: 2022/10/25 17:05:41 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr(unsigned int n)
{
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

int	ft_form_u(unsigned int n)
{
	int	count;

	ft_putnbr(n);
	count = 1;
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
