/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:10 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:40:24 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c -= 32);
	else
		return (c);
}

/* We start with an if statement that checks if the char
s between 'a' and 'z'.
If it is, we return c - 32, which is the uppercase version
of that character.
If it is not, we return the char as it is. */