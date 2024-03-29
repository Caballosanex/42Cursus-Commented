/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:59:35 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 10:08:51 by alexsanc         ###   ########.fr       */
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

/* It goes through the string, and counts the number of times
it finds a character that is not the delimiter.
It also counts the number of times it finds the delimiter
character, and if the next character is not the delimiter character
(or the end of the string), it increments the count.
It then returns the count. */

static int	ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/* Create a variable called i and set it to 0.
While the current character is not null and not equal to the character "c"
increment i.
Return i, which is the length of the word. */

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

/* The function ft_free takes a double pointer and an integer as parameters.
The function will first free the memory allocated for each of the strings
in the array (the strings are the i-th element of the array, where i goes from
the value of the second parameter to 0).
Then, the function will free the memory allocated for the array itself.
Finally, the function returns NULL. */

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

/* i is the index of the string s, j is the index of the tab
k is the index of the string tab[j].
The function loops on the string s until it finds a character that is not c.
If it finds a character that is not c, it allocates memory for the string
tab[j] that will be the j-th string in the tab.
It checks if the allocation was successful.
While s[i] is not c, it fills the string tab[j] with the characters from s.
It adds a null-terminating character at the end of the string and
increments the index of the tab.
it returns the tab. */

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

If the current character is equal to the delimiter character, the current
character is not copied to the tab array, and the tab array is terminated by a
null character.

If the current character is the terminating character, then the tab array is
terminated by a null character, and the while loop is terminated.
4. The while loop is then repeated for the next part of the string, until the
entire string is processed. 
*/