/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:40:57 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:18:37 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* We create an unsigned int variable called "i" and set it to 0.
We do this because we are going to use it to iterate over the array.
We check to see if the array is null and if the function is null.
We iterate over the array until we reach the end of the array.
We call the function and pass the index of the array and the address
of the index of the array. The reason we pass the address is because
we need to be able to change the value of the array.
We increment i so we can move on to the next index in the array.
We return nothing */