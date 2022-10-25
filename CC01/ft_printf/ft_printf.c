/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:14:55 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/25 11:40:14 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_parse(str, &i, ap);
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

static int type_var(char c, va_list element)
{
	if (c == 'c')
		return (ft_putchar(va_arg(element, int)));
	if (c == 's')
		return (ft_putstr(va_arg(element, char *)));
	if (c == 'p')
		return (ft_void_hex(va_arg(element, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putdec_int(va_arg(element, int)));
	if (c == 'u')
		return (ft_putunsigned(va_arg(element, unsigned int)));
	if (c == 'x')
		return (ft_hexa_l(va_arg(element, int)));
	if (c == 'X')
		return (ft_hexa_u(va_arg(element, int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
