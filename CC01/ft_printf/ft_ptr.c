/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:05 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/14 09:54:59 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *p, int count)
{
	count = ft_putstr("0x", count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	count = ft_convert((unsigned long long int) p, count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}

int	ft_convert(unsigned long long int num, int count)
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

/* This function needs to be treated as unsigned long long int
because the pointer is 8 bytes longa and has to print a 0x0 at start.
Also uses hex_low to print the hexadecimal number.
The function ft_ptr is a function that takes a void pointer
and a count as arguments. It prints the string "0x" and
then calls the function ft_convert to print the hexadecimal number.
The function ft_convert is a recursive function that takes an
unsigned long long int and a count as arguments. It checks if
the number is greater than 16 and if it is, it calls itself
with the number divided by 16 and the count.
Then it prints the hexadecimal number using the HEXA_LOW string. */