/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:59:35 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/06 11:26:20 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contar_palabras(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill_tab(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * (ft_word_len(s + i, c) + 1));
			if (!tab[j])
				return (ft_free(tab, j));
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_contar_palabras(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_fill_tab(s, c, tab);
	return (tab);
}

/*	while (s[i] && s[i] != c)
		tab[j][k++] = s[i++];
	tab[j++][k] = '\0';

The first line is a while loop that checks if the current char is not the
terminating character (i.e. the null character) and also if it is not equal to
the delimiter character. If both are true, then the current character is
copied to the tab array.

2. If the current character is equal to the delimiter character, the current
character is not copied to the tab array, and the tab array is terminated by a
null character.

3. If the current character is the terminating character, then the tab array is
terminated by a null character, and the while loop is terminated.
4. The while loop is then repeated for the next part of the string, until the
entire string is processed. 
*/