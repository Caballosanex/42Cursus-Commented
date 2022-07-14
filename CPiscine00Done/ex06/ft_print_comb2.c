/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:24:12 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/14 17:27:32 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_char(char x)
{
	write (1, &x, 1);
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
			if (e != 98 || d != 99)
			{
				write (1, ", ", 2);
			}
			d++;
		}
		e++;
	}
}
