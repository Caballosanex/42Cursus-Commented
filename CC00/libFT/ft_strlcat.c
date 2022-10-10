/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:37:11 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:26:26 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

/* The variables i, j, dst_len, and src_len are initialized
The src_len variable stores the length of the src string
The dst_len variable stores the length of the dst string
The j variable stores the length of the dst string
The i variable is initialized to 0
If the dst_len is less than the size - 1 and the size is
greater than 0, the code in the while loop is executed.
The while loop executes as long as the src string has characters
and the dst_len + i is less than the size - 1
The dst string is appended with the src string character by character
The dst string is terminated
If the length of the dst string is greater than or equal to the size
the dst_len variable is assigned the value of the size
The length of the dst string + the length of the src string is returned */