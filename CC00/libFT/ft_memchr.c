/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:46:13 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 13:26:52 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/* We declare a variable "i" and assign it 0.
We then create a while loop that will run for as long as "i" is less than "n".
We then check if the current index of the string "s" is equal
to the character we are looking for "c".
If it is, we return the address of that index.
If not, we increment "i".
If we reach the end of the while loop, it means we did not find
the character "c" in the string "s", so we return NULL. */