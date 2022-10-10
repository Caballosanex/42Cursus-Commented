/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:27:20 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:31:18 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* Here is the explanation for the code above:
The ft_strncmp() function compares the two strings s1 and s2.
It compares only the first (at most) n bytes of s1 and s2.
The ft_strncmp() function returns an integer less than, equal
to, or greater than zero if s1 is found, respectively,
to be less than, to match, or be greater than s2.
The comparison is done using unsigned characters, so that '\200'
is greater than '\0'.
The ft_strncmp() function returns 0 if the two strings are identical
otherwise returns the difference between the first two differing bytes
(treated as unsigned char values, so that `\200' is
greater than `\0', for example). 
Zero-length strings are always identical.
This behavior is not required by C and portable code should
only rely on the sign of the returned value. */
