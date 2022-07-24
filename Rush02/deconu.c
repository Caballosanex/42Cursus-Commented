/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deconu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:50:58 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/23 20:05:48 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

// Printa String
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

// Cuenta los numeros
int	nbcount(int nb) 
{
	int n;

	n = 1;
	while(nb > 9)
	{
		nb /= 10;
		n++;
	}	
	return (n);
}

void deconu(int nb)
{
	int found;
	int nb2;
	int ndigits;
	int r;
	int len = nbcount(nb);
 	char *onedigits[20];
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

	char *tens[8];
	tens[0] = "Twenty";
	tens[1] = "Thirty";
	tens[2] = "Forty";
	tens[3] = "Fifty";
	tens[4] = "Sixty";
	tens[5] = "Seventy";
	tens[6] = "Eighty";
	tens[7] = "Ninety";

	char *tenpow[2];
	tenpow[0] = "Hundred";
	tenpow[1] = "Thousand";

	printf("valor nb : %d \n", nb);
	r = 0;
	found = 0;
	// Reverse number
	/*
	while (nb > 0)
	{	
		r = nb % 10;
		nb2 = nb2 * 10 + r;
		nb /= 10;
	}
	printf("valor nb2 : %d \n", nb);
	*/
	r = nb;
	printf("Numero de digitos : %d \n",nbcount(nb));
	while (nb != 0)
	{
		if (nb < 20)
		{
		    //unidades 
			printf("%s\n ",onedigits[nb]);
		    nb = 0; 
		}
		else if (len == 2)	
		{
			r = nb / 10;
			// Decenas
			printf("%s ",tens[r-2]);
			nb /= 10;
			len--;
		}
		else if (len == 3)
		{
			r = nb / 100;
			// Centenas
			printf("%s %s ",onedigits[r],tenpow[0]);
			nb /= 10;
			len--;
		} 
		else if (len == 4)
		{
			r = nb / 1000;
			// Millares
			printf("%s %s ",onedigits[r],tenpow[1]);
			nb /= 10;
			len--;
		}
	}
}

int main(int argc, char *argv[])
{
deconu(atoi(argv[1]));
return 0;
}
	
