/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:26:46 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/03 11:49:05 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ERR_NUM);
	while (str[i])
	{
		if (ft_putchar(str[i]) == ERR_NUM)
			return (ERR_NUM);
		i++;
	}
	return (i);
}
