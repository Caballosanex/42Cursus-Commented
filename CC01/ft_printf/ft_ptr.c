/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */	
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:05 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/04 11:16:09 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_ptr(void *p, int count)
{
	count = ft_putstr("0x", count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	count = ft_convert((unsigned long int) p, count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}

int ft_convert(unsigned long int num, int count)
{
	if (num >= 16)
	{
		count = ft_convert(num / 16, count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	count = ft_putchar(HEXA_LOW[num % 16], count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}

/* This function needs to be treated as unsigned long long
and has to print a 0x0 at start. Also uses hex_low */