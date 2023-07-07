/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:30:58 by alexsanc          #+#    #+#             */
/*   Updated: 2023/02/13 13:30:59 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * The variable 'gps' represents the accumulated input from the file being read.
 * It acts as a buffer that stores the data read from the file in chunks.
 */

char *ft_get_line(char *gps, char *line)
{
	int i;

	i = 0;
	if (!gps[i])
		return (NULL); /* Return null if gps is empty */
	while (gps[i] && gps[i] != '\n')
		i++;							   /* Find the index of the first occurrence of '\n' or the end of the string */
	i = i + (gps[i] == '\n');			   /* Increment i if '\n' is found to include it in the line */
	line = ft_calloc(i + 1, sizeof(char)); /* Allocate memory for the line including the null terminator */
	if (!line)
		return (NULL); /* Return null if memory allocation fails */
	i = 0;
	while (gps[i] && gps[i] != '\n')
	{
		line[i] = gps[i]; /* Copy characters from gps to line until '\n' or the end of gps */
		i++;
	}
	if (gps[i] == '\n')
		line[i] = '\n'; /* Add '\n' at the end of the line if it exists in gps */
	return (line);		/* Return the line */
}

char *next_buffer(char *s1)
{
	char *new_buffer;
	int i;
	int j;

	i = 0;
	while (s1[i] && s1[i] != '\n')
		i++; /* Find the index of the first occurrence of '\n' or the end of the string */
	if (!s1[i])
		return (double_free(&s1, NULL));					 /* Free memory and return null if no '\n' is found */
	new_buffer = ft_calloc(ft_strlen(s1) - i, sizeof(char)); /* Allocate memory for the new buffer */
	if (!new_buffer)
		return (double_free(&s1, NULL)); /* Free memory and return null if memory allocation fails */
	i++;
	j = 0;
	while (s1[i])
		new_buffer[j++] = s1[i++]; /* Copy characters from s1 starting from i to new_buffer */
	double_free(&s1, NULL);		   /* Free memory allocated to s1 */
	return (new_buffer);		   /* Return the new buffer */
}

char *ft_free_join(char *s1, char *gps)
{
	char *tmp;

	tmp = ft_strjoin(gps, s1); /* Concatenate gps and s1 into tmp */
	if (!tmp)
		return (double_free(&s1, &gps)); /* Free memory and return null if memory allocation fails */
	double_free(&gps, NULL);			 /* Free memory allocated to gps */
	return (tmp);						 /* Return tmp */
}

char *fd_reader(int fd, char *gps)
{
	char *s1;
	int bytes;

	bytes = 1;
	s1 = ft_calloc(BUFFER_SIZE + 1, sizeof(char)); /* Allocate memory for the temporary buffer s1 */
	if (!s1)
		return (double_free(&gps, NULL)); /* Free memory and return null if memory allocation fails */
	while (bytes > 0)
	{
		bytes = read(fd, s1, BUFFER_SIZE); /* Read BUFFER_SIZE number of bytes from fd into s1 */
		if (bytes < 0)
			return (double_free(&s1, &gps)); /* Free memory and return null if read operation fails */
		s1[bytes] = '\0';					 /* Add null terminator to the end of s1 */
		gps = ft_free_join(s1, gps);		 /* Concatenate s1 and gps into gps */
		if (!gps)
			return (NULL); /* Return null if memory allocation fails during concatenation */
		if (ft_strchr(s1, '\n'))
			break; /* If '\n' is found in s1, exit the loop */
	}
	double_free(&s1, NULL); /* Free memory allocated to s1 */
	return (gps);			/* Return gps */
}

char *get_next_line(int fd)
{
	char *line;
	static char *gps = NULL;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		if (gps)
			double_free(&gps, NULL); /* Free memory allocated to gps if fd or BUFFER_SIZE is invalid */
		return (NULL);				 /* Return null */
	}
	if (!gps)
		gps = ft_calloc(1, 1); /* Initialize gps if it's not already initialized */
	if (!gps)
		return (double_free(&gps, NULL)); /* Free memory and return null if memory allocation fails */
	gps = fd_reader(fd, gps);			  /* Read from fd into gps */
	if (!gps)
		return (NULL);			   /* Return null if reading fails */
	line = ft_get_line(gps, line); /* Get the line from gps */
	if (!line || *line == '\0')
		return (double_free(&line, &gps)); /* Free memory and return null if line is empty */
	gps = next_buffer(gps);				   /* Get the next buffer from gps */
	return (line);						   /* Return the line */
}