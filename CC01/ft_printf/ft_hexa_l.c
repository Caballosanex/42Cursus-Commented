/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:37:59 by alexsanc          #+#    #+#             */
/*   Updated: 2023/01/02 15:41:21 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_l(unsigned int n, int count)
{
	if (n >= 16)
	{
		count = ft_hexa_l(n / 16, count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	count = ft_putchar(HEXA_LOW[n % 16], count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}

/* We use this function for Hexadecimal numbers in lowercase.
First, I check if the number is greater or equal to 16 (MAX HEX)
If it is, I call the function again with the number divided by 16 as
the first parameter and the count (the number of characters printed)
If the return value is -1, I return ERR_NUM. (In case of error)
If it's not, I print the character that has the value of the
remainder of the division of the number by 16.
If the return value is -1, I return ERR_NUM.
If it's not, I return the count. */