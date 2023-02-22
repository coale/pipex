/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:43:21 by aconta            #+#    #+#             */
/*   Updated: 2022/10/25 16:40:52 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static void	ft_putx(unsigned int n, char c)
{
	if (n <= 15)
	{
		if (n <= 9)
			n += 48;
		else
		{
			if (c == 'x')
				n += 87;
			else
				n += 55;
		}
		write(1, &n, 1);
	}
	else if (n >= 16)
	{
		ft_putx(n / 16, c);
		ft_putx(n % 16, c);
	}
}

int	ft_form_x(unsigned int n, char c)
{
	int	count;

	ft_putx(n, c);
	count = 1;
	while (n >= 16)
	{
		n = n / 16;
		count++;
	}
	return (count);
}
