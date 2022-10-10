/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:33:50 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 09:19:01 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* Check if the destination and source are not NULL
if they are then return the destination pointer.
Check if the destination address is greater than the source address
if it is then the source and destination memory addresses overlap.
If they do overlap, then we start at the end of the memory
block and copy backwards to the start.
If the destination address is not greater than the source address
then the source and destination memory addresses do not overlap.
We can copy forwards from the start of the memory block to the end. */