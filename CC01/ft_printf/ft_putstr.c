/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:26:46 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/14 10:10:48 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int count)
{
	size_t	i;

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

/* First, we check if s is NULL.
If it is, we set s to the string "null".
We use a while loop to iterate through each char of s.
In each iteration, we print the char using ft_putchar
and increment i and we return the new count. */