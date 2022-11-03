/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:38:12 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/03 11:49:22 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int		i;
	char	*str;

	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	str = malloc(sizeof(char) * 12);
	if (!str)
		return (ERR_NUM);
	while (n > 0)
	{
		str[i] = DEC[n % 10];
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(str[i - 1]);
		i--;
	}
	free(str);
	return (0);
}
