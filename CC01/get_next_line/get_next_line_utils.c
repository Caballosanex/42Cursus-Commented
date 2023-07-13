/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:30:56 by alexsanc          #+#    #+#             */
/*   Updated: 2023/07/13 13:52:36 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* FT_FREE(DOBLE) */

/* Function to free memory allocated to buffers */
char	*double_free(char **buff, char **buff_)
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
/* Check if buff and *buff are not null */
/* Free the memory allocated to *buff */
/* Set *buff to null to avoid dangling pointers */
/* Check if buff_ and *buff_ are not null */
/* Free the memory allocated to *buff_ */
/* Set *buff_ to null to avoid dangling pointers */
/* Return null to indicate that the memory has been freed */

/* FT_CALLOC */

/* Function to allocate and zero-initialize memory */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (count * size))
		((char *)ptr)[i++] = 0;
	return (ptr);
}
/* Allocate memory for count * size elements */
/* Check if memory allocation failed */
/* Return 0 to indicate failure */
/* Initialize the allocated memory to zero byte by byte */
/* Return the pointer to the allocated and zero-initialized memory */

/* FT_STRLEN */

/* Basic function for length of a string */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/* Iterate through the characters of s until the null terminator is reached */
/* Increment the counter to calculate the length of the string */
/* Return the length of the string */

/* FT_STRJOIN */

/* Function to concatenate two strings,
pretty much libft at this point */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*newstr;
	unsigned int	i;
	unsigned int	j;

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
/* Allocate memory for the concatenated string */
/* Check if memory allocation failed */
/* Return null to indicate failure */
/* Copy the characters of s1 into newstr */
/* Copy the characters of s2 into newstr */
/* Add the null terminator at the end */
/* Return the pointer to the concatenated string */

/* FT_STRCHR */

/* Function to search for a character in a string.
We use this to find the newline or null terminator */
char	*ft_strchr(const char *s, int c)
{
	int	i;

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
/* Iterate through the characters of s until the null terminator is reached */
/* Check if a match is found with the given character c */
/* Return a pointer to the matched character in s */
/* Check if c is equal to the null terminator */
/* Return a pointer to the null terminator */
/* Return null if no match is found */
