/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:14:55 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/08 16:48:57 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_type(va_list arg, char const type, int count)
{
	if (type == '%')
		count = ft_putchar('%', count);
	if (type == 'c')
		count = ft_putchar(va_arg(arg, int), count);
	if (type == 's')
		count = ft_putstr(va_arg(arg, char *), count);
	if (type == 'p')
		count = ft_ptr(va_arg(arg, void *), count);
	if (type == 'd' || type == 'i')
		count = ft_putnbr(va_arg(arg, int), count);
	if (type == 'u')
		count = ft_printnum(va_arg(arg, int), count);
	if (type == 'x')
		count = ft_hexa_l(va_arg(arg, unsigned int), count);
	if (type == 'X')
		count = ft_hexa_u(va_arg(arg, unsigned int), count);
	return (count);
}

int ft_check(va_list arg, char const *s, int count)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			count = ft_type(arg, s[i + 1], count);
			if (count == ERR_NUM)
				return (ERR_NUM);
			i++;
		}
		else
		{
			count = ft_putchar(s[i], count);
			if (count == ERR_NUM)
				return (ERR_NUM);
		}
		i++;
	}
	return (count);
}

int ft_printf(char const *s, ...)
{
	int count;
	va_list arg;

	count = 0;
	va_start(arg, s);
	count = ft_check(arg, s, count);
	va_end(arg);
	return (count);
}
