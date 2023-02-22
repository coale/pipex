/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:21:33 by aconta            #+#    #+#             */
/*   Updated: 2022/10/26 08:24:47 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_form_spec(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_form_c(va_arg(ap, int));
	else if (c == 's')
		len = ft_form_s(va_arg(ap, char *));
	else if (c == 'p')
		len = ft_form_p(va_arg(ap, unsigned long int));
	else if (c == 'd' || c == 'i')
		len = ft_form_di(va_arg(ap, int));
	else if (c == 'u')
		len = ft_form_u(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		len = ft_form_x(va_arg(ap, unsigned int), c);
	else if (c == '%')
		len = write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_form_spec(str[i + 1], ap);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
