/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:18:28 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:39:11 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	temp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	temp = ft_strlen(s);
	temp = temp - start;
	if (temp < len)
		len = temp;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/* Checks if the string is NULL.
Checks if the start is greater than the length of the string.
If it is, return an empty string.
Subtracts the start from the length of the string.
If the length is less than the len, set len to the temp.
Allocate memory for the new string.
Copy the string to the new string.
Add a null terminator to the end of the string. */