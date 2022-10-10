/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:11:41 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:39:44 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c += 32);
	else
		return (c);
}

/* First, we check if the character is upper case or not.
If it's upper case, we add 32 to the char to make it lower case.
(The ASCII value for lower case letters is 32 greater than the
corresponding upper case letters)
If it's already lower case, we just return the character itself. */