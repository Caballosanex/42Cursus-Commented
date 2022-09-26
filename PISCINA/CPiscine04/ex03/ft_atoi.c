/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:25:37 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/27 13:10:20 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		sign = -1;
	while ((*str == '-') || (*str == '+'))
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((int)*str - '0');
		++str;
	}
	return (num * sign);
}
