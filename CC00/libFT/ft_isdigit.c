/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:55:54 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/07 13:17:57 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* We are creating a function called ft_isdigit that takes a
parameter of type int called c.
We then have an if statement that checks if c is greater than
or equal to 0 and less than or equal to 9.
If this is true, we return the value 1, otherwise we return the value 0 */