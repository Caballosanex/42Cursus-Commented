/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:02:51 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 13:06:43 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			neg;
	long			res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * neg);
}

/* We create a function that takes a string as a parameter.
We initialize three variables, i to 0, neg to 1 and res to 0.
We create a while loop that skips all the spaces,
tabs and new lines.
We check if the first character is a minus sign, if so,
we set neg to -1.
Then we check if the first character is a minus or a plus sign,
if so we increment i.
We create a while loop that checks if the current character is
a number and if so we add it to res.
We return res times neg. */