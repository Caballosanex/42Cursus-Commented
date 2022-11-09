/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:38:08 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:23 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int num, int count)
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

int ft_printnum(unsigned int num, int count)
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