/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowleft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:21:57 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 17:38:06 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rowleft(char *a)
{
	int			i;
	static char	rowleft[4];

	i = 9;
	*rowleft = 0;
	while (i < 13)
	{
		rowleft[i] = a[i - 9];
		i++;
	}
	return (rowleft);
}
