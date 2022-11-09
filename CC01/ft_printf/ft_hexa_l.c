/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:37:59 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/08 16:29:27 by alexsanc         ###   ########.fr       */
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
