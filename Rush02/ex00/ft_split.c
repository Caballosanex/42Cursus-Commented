/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srieder <srieder@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:53:46 by srieder           #+#    #+#             */
/*   Updated: 2022/07/24 14:14:51 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *dest)
{
	int	i;
	int d;
	char	**tab;
	int	n;
	int	size;

	tab = malloc(40* sizeof(char *));
	i = 0;
	d = 0;
	n = 0;
	size = 0;
	//while (d <= 3)
	//{	
		while (dest[i] < 97 || dest[i] > 122)
		{
			printf("1loop");
			i++;
		}
		
		//Attempt to define the size due to segmentation fault
		while (dest[i] != '\n')
		{
			i++;
			size++;
		}
		i = i - size;
		printf("%d", size);
		// end of the attempt
		while (dest[i] != '\n')
		{
			tab[d] = (char*)malloc(size * sizeof(char));
			if (! tab[d])
			{
				printf("error tab");
				return (0);
			}
			tab[d][n] = dest[i];
			i++;
			n++;
			printf("2loop");
		}
			printf("%c", tab[0][1]);
			tab[d][n] = '\0';
			d++;
			i++;
			size = 0;
			n = 0;
	//	}
	// free (tab);
	return tab;
}

int main ()
{
char *str = "1: paco\n 2: pepe";
char **retorno;

retorno = ft_split(str);
printf("%s", retorno[0]);
}
