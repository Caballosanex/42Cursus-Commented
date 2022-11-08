/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:26:46 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/07 14:30:15 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_putstr that handles NULL and returns ERR_NUM in case of error
int ft_putstr(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) != 6)
			return (ERR_NUM);
		return (6);
	}
		while (s[i])
		{
			if (ft_putchar(s[i]) == ERR_NUM)
				return (ERR_NUM);
			i++;
	}
	return (i);
}
