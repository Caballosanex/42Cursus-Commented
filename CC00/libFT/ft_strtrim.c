/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:40:38 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:37:05 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i + j])
		j++;
	while (j > 0 && ft_strchr(set, s1[i + j - 1]))
		j--;
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while (k < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

/* We are creating a new string (str) that will
hold the trimmed version of s1.
We are starting from the beginning of s1, and while s1[i] is a character
that is present in set, we increment i. This is to find the beginning
of the string that we want to keep.
We create a new variable j, and set it to 0. Then, we are starting
from the end of s1, and while s1[i + j] is a character that is present
in set, we decrement j. 
This is to find the end of the string that we want to keep.
We are using malloc to allocate memory for str, which will be of
size j + 1. This is because we want to take the substring
from s1[i] to s1[i + j - 1], and we want to add
a null terminator to the end of the string.
We are copying the characters from s1 to str
and adding the null terminator at the end.
Finally, we are returning str. */
