/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowright.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:22:10 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 17:47:15 by afortis-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rowright(char *a)
{
	int			i;
	static char	rowright[4];

	i = 13;
	*rowright = 0;
	while (i < 17)
	{
		rowright[i] = a[i - 13];
		i++;
	}
	return (rowright);
}
