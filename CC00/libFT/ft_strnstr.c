/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:21:54 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:32:47 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

/* If the needle is an empty string, we can just return the haystack.
If the haystack is also empty, we can just return NULL.
We use a while loop to iterate through the haystack.
We also have an if statement to check if the haystack is
empty or if i is greater than or equal to len.
We use another while loop to iterate through the needle.
We also have an if statement to check if the haystack is
empty or if i + j is greater than or equal to len.
We have another if statement to check if the next character
in the needle is the null terminator.
If it is, we return the address of the haystack + i.
We increment j.
If the while loop finishes, we increment i.
If the while loop finishes, we can just return NULL. */