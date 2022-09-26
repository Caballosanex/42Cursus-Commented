/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:06:59 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/26 19:20:35 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	e;
	int	d;

	e = 0;
	while (e <= 98)
	{
		d = e + 1;
		while (d <= 99)
		{
			ft_print_char(e / 10 + '0');
			ft_print_char(e % 10 + '0');
			write (1, " ", 1);
			ft_print_char(d / 10 + '0');
			ft_print_char(d % 10 + '0');
			if (e != 98)
			{
				write (1, ", ", 2);
			}
			d++;
		}
		e++;
	}
}
