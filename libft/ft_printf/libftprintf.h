/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:29:51 by aconta            #+#    #+#             */
/*   Updated: 2022/10/26 08:30:20 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_form_c(int c);
int	ft_form_di(int n);
int	ft_form_p(unsigned long int n);
int	ft_form_s(char *str);
int	ft_form_u(unsigned int n);
int	ft_form_x(unsigned int n, char c);

#endif
