/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:59:55 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/25 14:04:51 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if (write(1, &c, 1) != 1)
		return (ERR_NUM);
	return (1);
}

/* Function ft_putchar that writes a character
to the standard output with write protection
and returns -1 with ERR_NUM in case of error.*/