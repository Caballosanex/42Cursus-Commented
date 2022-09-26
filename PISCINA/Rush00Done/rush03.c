/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrabasso <hrabasso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:30:44 by hrabasso          #+#    #+#             */
/*   Updated: 2022/07/10 14:46:05 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush03(int x, int y)
{
	int	n1;
	int	n2;

	n2 = 1;
	while (n2 <= y && x > 0)
	{
		n1 = 1;
		while (n1 <= x)
		{
			if ((n1 == 1 && n2 == 1) || (n1 == 1 && n2 == y))
				ft_putchar('A');
			else if ((n1 == x && n2 == 1) || (n1 == 1 && n2 == y))
				ft_putchar('C');
			else if (n1 == x && n2 == y)
				ft_putchar('C');
			else if ((n1 == 1) || (n1 == x) || (n2 == 1) || (n2 == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			n1++;
		}
		ft_putchar('\n');
		n2++;
	}
}
