/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:04:09 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:14:04 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* We first define a function that takes in a string
as an argument.
Then declare a variable of type int to be used to iterate
through the string.
Create a variable of type char* and use the malloc
function to allocate enough memory to store the string.
We then check to see if the malloc function failed.
If it did, we return NULL.
Start a while loop to iterate through the string until
we reach the null character.
We then assign each character in the string to a
position in the newly allocated memory.
Finally add a null character to the end of the string
and return the string. */