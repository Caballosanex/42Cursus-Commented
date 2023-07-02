/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:30:56 by alexsanc          #+#    #+#             */
/*   Updated: 2023/07/02 12:58:55 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *double_free(char **buff, char **buff_)
{
	if (buff && *buff)
	{
		free(*buff);
		*buff = NULL;
	}
	if (buff_ && *buff_)
	{
		free(*buff_);
		*buff_ = NULL;
	}
	return (NULL);
}

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t i;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (count * size))
		((char *)ptr)[i++] = 0;
	return (ptr);
}

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *newstr;
	unsigned int i;
	unsigned int j;

	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		newstr[i + j] = (char)s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}