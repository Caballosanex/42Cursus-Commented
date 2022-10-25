/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:26:46 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/25 11:38:11 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ERR_NUM);
	while (s[i])
	{
		if (ft_putchar(s[i]) == ERR_NUM)
			return (ERR_NUM);
		i++;
	}
	return (i);
}
