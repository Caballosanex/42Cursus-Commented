/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:45:36 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:28:06 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		(dst[i] = 0);
	}
	while (src[i])
		i++;
	return (i);
}

/* Function tkaes three arguments;
Initializes an integer variable i to 0
Checks if the size of the destination string is larger than 0.
If the size of the destination string is larger than 0, it copies the source
string to the destination string, but stops once the destination string is
full. It also places a null terminator at the end of the destination string;
If the size of the destination string is 0, it copies the source string to
the destination string, but doesn't place a null terminator at the end of the
destination string;
Returns the length of the source string. */