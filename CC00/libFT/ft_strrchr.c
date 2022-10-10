/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:36 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:33:35 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/* The function takes two parameters, a string and a character.
We create a variable called i and set it to 0.
We then go through the string and increment i each time we go
through the loop.
Once we reach the end of the string, we go through the string
in reverse and check if the character at each index is the
character we are looking for.
If it is, we return the character at that index.
If we reach the beginning of the string without
finding the character, we return 0. */