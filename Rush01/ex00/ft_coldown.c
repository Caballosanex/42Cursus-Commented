/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coldown.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:51:36 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 17:32:58 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_coldown(char *a)
{
	int			i;
	static char	coldown[4];

	i = 5;
	*coldown = 0;
	while (i < 9)
	{
		coldown[i] = a[i - 5];
		i++;
	}
	return (coldown);
}
