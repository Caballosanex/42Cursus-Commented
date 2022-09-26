/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srieder <srieder@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:59:33 by srieder           #+#    #+#             */
/*   Updated: 2022/07/24 19:21:46 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_filltable(char *dest, int i, char **tab, int d)
{
	int	n;

	n = 0;
	while (dest[i] != '\n')
	{	
		tab[d][n] = dest[i];
		i++;
		n++;
	}
	return (i);
}

int	ft_size(char *dest, int i)
{
	int	size;

	size = 0;
	while (dest[i] != '\n')
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_split(char *dest)
{
	char	**tab;
	int		i;
	int		d;
	int		n;
	int		size;

	tab = malloc(42 * sizeof(char *));
	i = 0;
	d = 0;
	while (d <= 41)
	{
		while (dest[i] < 97 || dest[i] > 122)
		{
			i++;
		}	
		size = ft_size(dest, i);
		tab[d] = (char *) malloc (size * sizeof (char));
		i = ft_filltable(dest, i, tab, d);
		tab[d][n] = '\0';
		d++;
		i++;
		size = 0;
		n = 0;
	}
	return (tab);
}
/*
int	main(void)
{
	char	*str = "1: paco\n2: pepe\n";
	char	**retorno;

	retorno = ft_split(str);
	printf("%s", retorno[0]);
}
*/
