/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:26:46 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/09 12:28:32 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_putstr that handles NULL and returns ERR_NUM in case of error
int ft_putstr(char *s, int count)
{
	size_t i;

	i = 0;
	if (!s)
		s = NLL_MSG;
	while (s[i])
	{
		count = ft_putchar(s[i++], count);
		if (count == ERR_NUM)
			return (ERR_NUM);
	}
	return (count);
}
