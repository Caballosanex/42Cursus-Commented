/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:38:08 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/14 10:11:05 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num, int count)
{
	if (num == -2147483648)
	{
		count = ft_putstr("-2147483648", count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	else
	{
		if (num < 0)
		{
			count = ft_putchar('-', count);
			if (count == ERR_NUM)
				return (ERR_NUM);
			num *= ERR_NUM;
		}
		count = ft_printnum(num, count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	return (count);
}

int	ft_printnum(unsigned int num, int count)
{
	if (num >= 10)
	{
		count = ft_printnum(num / 10, count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	count = ft_putchar((num % 10) + '0', count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}

/* First, we check if the number is -2147483648
If it is, we print the string.
If the number is negative, we print a '-' and multiply
the number by -1 to make it positive.
If the number is positive, we use the function
ft_printnum to print the number.
ft_printnum is a recursive function that will print
the number in reverse order.
For example, if the number is 123, ft_printnum
will call itself with the number 12.
Then 12 will be divided by 10, so the function
will call itself with the number 1.
Then 1 will be divided by 10, so the function
will call itself with the number 0.
Then the function will print 3, then 2, then 1. */