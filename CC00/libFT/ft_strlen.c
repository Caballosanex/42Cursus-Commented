/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:21:48 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:29:01 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* Here is the explanation for the code above:
We declare a size_t variable called i and set it to 0.
We go through the string as long as the current character
is not the null character.
We increment i by 1 each time we go through the string.
Finally, we return the length of the string. */