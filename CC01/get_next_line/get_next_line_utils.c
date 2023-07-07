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

/* Function to free memory allocated to buffers */
char *double_free(char **buff, char **buff_)
{
	if (buff && *buff) /* Check if buff and *buff are not null */
	{
		free(*buff);  /* Free the memory allocated to *buff */
		*buff = NULL; /* Set *buff to null to avoid dangling pointers */
	}
	if (buff_ && *buff_) /* Check if buff_ and *buff_ are not null */
	{
		free(*buff_);  /* Free the memory allocated to *buff_ */
		*buff_ = NULL; /* Set *buff_ to null to avoid dangling pointers */
	}
	return (NULL); /* Return null to indicate that the memory has been freed */
}

/* Function to allocate and zero-initialize memory */
void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t i;

	ptr = malloc(count * size); /* Allocate memory for count * size elements */
	if (!ptr)					/* Check if memory allocation failed */
		return (0);				/* Return 0 to indicate failure */
	i = 0;
	while (i < (count * size))
		((char *)ptr)[i++] = 0; /* Initialize the allocated memory to zero byte by byte */
	return (ptr);				/* Return the pointer to the allocated and zero-initialized memory */
}

/* Basic function for length of a string */
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i]) /* Iterate through the characters of s until the null terminator is reached */
		i++;	 /* Increment the counter to calculate the length of the string */
	return (i);	 /* Return the length of the string */
}

/* Function to concatenate two strings,
pretty much libft at this point */
char *ft_strjoin(char const *s1, char const *s2)
{
	char *newstr;
	unsigned int i;
	unsigned int j;

	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1); /* Allocate memory for the concatenated string */
	if (!newstr)																 /* Check if memory allocation failed */
		return (NULL);															 /* Return null to indicate failure */
	i = 0;
	while (s1[i]) /* Copy the characters of s1 into newstr */
	{
		newstr[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j]) /* Copy the characters of s2 into newstr */
	{
		newstr[i + j] = (char)s2[j];
		j++;
	}
	newstr[i + j] = '\0'; /* Add the null terminator at the end */
	return (newstr);	  /* Return the pointer to the concatenated string */
}

/* Function to search for a character in a string.
We use this to find the newline or null terminator */
char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0') /* Iterate through the characters of s until the null terminator is reached */
	{
		if (s[i] == (unsigned char)c) /* Check if a match is found with the given character c */
			return ((char *)&s[i]);	  /* Return a pointer to the matched character in s */
		i++;
	}
	if ((unsigned char)c == '\0') /* Check if c is equal to the null terminator */
		return ((char *)&s[i]);	  /* Return a pointer to the null terminator */
	return (NULL);				  /* Return null if no match is found */
}
