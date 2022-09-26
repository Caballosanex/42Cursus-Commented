/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:21:58 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/26 19:36:44 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char	c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_putcoma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_printncheck(int x[], int n)
{
	int	i;
	int	ok;

	i = 0;
	ok = 1;
	while (i < n - 1)
	{
		if(!(x[i] < x [i + 1]))
		{
		ok = 0;
		}
		i++;
	}
	if (ok == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != 57 - n + 1)
		{
			ft_putcoma();
		}
	}
}

void ft_print_combn(int n)

