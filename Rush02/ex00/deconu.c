/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deconu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:50:58 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/24 21:42:02 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = nb;
	i = 1;
	if (nb == 0 && power == 0)
		return (0);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

int	nbcount(int nb)
{
	int	n;

	n = 1;
	while (nb > 9)
	{
		nb /= 10;
		n++;
	}	
	return (n);
}

void	printa_num(int nb, int len)
{
	int		r;
	char	*onedigits[20];
	char	*tens[8];
	char	*tenpow[4];

	onedigits[0] = "Zero";
	onedigits[1] = "One";
	onedigits[2] = "Two";
	onedigits[3] = "Three";
	onedigits[4] = "Four";
	onedigits[5] = "Five";
	onedigits[6] = "Six";
	onedigits[7] = "Seven";
	onedigits[8] = "Eight";
	onedigits[9] = "Nine";
	onedigits[10] = "Ten";
	onedigits[11] = "Eleven";
	onedigits[12] = "Twelve";
	onedigits[13] = "Thirteen";
	onedigits[14] = "Fourteen";
	onedigits[15] = "Fifteen";
	onedigits[16] = "Sixteen";
	onedigits[17] = "Seventeen";
	onedigits[18] = "Eighteen";
	onedigits[19] = "Nineteen";
	tens[0] = "Twenty";
	tens[1] = "Thirty";
	tens[2] = "Forty";
	tens[3] = "Fifty";
	tens[4] = "Sixty";
	tens[5] = "Seventy";
	tens[6] = "Eighty";
	tens[7] = "Ninety";
	tenpow[0] = "Hundred";
	tenpow[1] = "Thousand";
	tenpow[2] = "Million";
	tenpow[3] = "Billion";
	r = 0;
	if (len == 1 || nb < 20)
	{
		ft_putstr(onedigits[nb]);
	}
	else if (len == 2 && nb > 19)
	{
	r = nb / ft_iterative_power(10, len - 1);
		if (r % 10 == 0)
			ft_putstr(tens[r - 2]);
		else
			ft_putstr(tens[r - 2]);
		ft_putstr(onedigits[nb % 10]);
	}
	else if (len >= 3)
	{
		if (len == 3)
		{
			r = nb / ft_iterative_power(10, len - 1);
			ft_putstr(onedigits[r]);
			ft_putstr(tenpow[0]);
		}
		else if (len > 3 && len <= 6)
		{
			r = nb / ft_iterative_power(10, len - 1);
			ft_putstr(onedigits[r]);
			ft_putstr(tenpow[1]);
		}
		else if (len > 6 && len <= 9)
		{
			r = nb / ft_iterative_power(10, len - 1);
			ft_putstr(onedigits[r]);
			ft_putstr(tenpow[2]);
		}
		else if (len > 9 && len <= 12)
		{
			r = nb / ft_iterative_power(10, len - 1);
			ft_putstr(onedigits[r]);
			ft_putstr(tenpow[3]);
		}
	}
}

void	deconu(int nb)
{
	int	len;

	len = nbcount(nb);
	while (len > 1)
	{
		printa_num(nb, len);
		nb = nb % ft_iterative_power(10, len - 1);
		len--;
	}
}
