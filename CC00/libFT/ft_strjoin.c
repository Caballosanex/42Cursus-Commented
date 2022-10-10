/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:33:38 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:23:43 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/* The function ft_strjoin() takes two strings as parameters and returns a new
string which is the result of the concatenation of the two strings.
We declare a pointer to char variable str and two integer variables i and j.
We initialize i to 0 and j to 0.
We check if s1 or s2 is NULL and if it is, we return NULL.
Then we allocate memory for the new string and assign the address of the first
byte to str. If the allocation fails, we return NULL.
We loop through the string s1 and copy each character to str.
We loop through the string s2 and copy each character to str.
We place a null character at the end of the string.
We return the new string. */