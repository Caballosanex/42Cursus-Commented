/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:14:55 by alexsanc          #+#    #+#             */
/*   Updated: 2023/01/02 15:51:09 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char const type, int count)
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

/* ft_type() is called to check the type of the specifier
and to call the function to print the argument.*/

int	ft_check(va_list arg, char const *s, int count)
{
	int	i;

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

/* ft_check() is called to check the string and call
the functions to print the string and the argument. */

int	ft_printf(char const *s, ...)
{
	int		count;
	va_list	arg;

	count = 0;
	va_start(arg, s);
	count = ft_check(arg, s, count);
	va_end(arg);
	return (count);
}

/* We create an int variable for the count of the
characters printed and a va_list variable for the arguments.
We start the va_list.
We send the arguments to the function ft_check.
We end the va_list.
We return the value of the variable count. */