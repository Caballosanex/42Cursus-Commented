/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:02:32 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 13:11:11 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/* We define ft_calloc, which takes in a count and a size.
We declare an integer i and set it to 0.
We declare a pointer to void and set it equal to the result
of malloc, passing in count * size as the parameter.
If ptr is NULL, we return NULL.
We then create a loop that runs count * size times.
We set the value of the array at index i to 0.
We increment i.
We return ptr. */