/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:38:01 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/08 16:43:00 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa_u(unsigned int n, int count)
{
	if (n >= 16)
	{
		count = ft_hexa_u(n / 16, count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	count = ft_putchar(HEXA_UP[n % 16], count);
	if (count == ERR_NUM)
		return (ERR_NUM);
	return (count);
}
