/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:59:57 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 10:23:08 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*	The function ft_strmapi() takes two arguments,
a string s and a function f.

We create a new string str and a variable i,
which is an unsigned int.

We set i to 0 and allocate memory for str, which
is the size of the string s + 1 for the null terminator.
If the allocation fails, the function returns NULL.

We loop through the string s and use the function f to modify
each character of the string s and store it in str.
We set the last character of str to null and return str. */