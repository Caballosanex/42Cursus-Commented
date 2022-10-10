/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:22:23 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 13:09:38 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* We set the variable i to 0. This will be used as an index
to access the elementsof the array.
We start a while loop that will run until i is equal to n.
This means that the loop will run n times.
We set the element at index i to 0. We do this by using a
cast to turn the void pointer into a char pointer. This is
because the array is of type char. We can thenaccess the
elements of the array using the index i. This is equivalent to
s[i] = 0;
We increment i to move on to the next element of the array. */