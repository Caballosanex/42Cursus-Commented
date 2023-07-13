/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:30:58 by alexsanc          #+#    #+#             */
/*   Updated: 2023/07/13 15:57:19 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* The variable 'gps' represents the
accumulated input from the file being read.
It acts as a buffer that stores the data read from the file in chunks. */

char	*ft_get_line(char *gps, char *line)
{
	int	i;

	i = 0;
	if (!gps[i])
		return (NULL);
	while (gps[i] && gps[i] != '\n')
		i++;
	i = i + (gps[i] == '\n');
	line = ft_calloc(i + 1, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (gps[i] && gps[i] != '\n')
	{
		line[i] = gps[i];
		i++;
	}
	if (gps[i] == '\n')
		line[i] = '\n';
	return (line);
}
/* Return null if gps is empty */
/* Find the index of the first occurrence of '\n' or the end of the string */
/* Increment i if '\n' is found to include it in the line */
/* Allocate memory for the line including the null terminator */
/* Return null if memory allocation fails */
/* Copy characters from gps to line until '\n' or the end of gps */
/* Add '\n' at the end of the line if it exists in gps */
/* Return the line */

/* ft_nextbuffer */

/* Function to create a new buffer from the
remaining characters of the previous buffer */
char	*next_buffer(char *s1)
{
	char	*new_buffer;
	int		i;
	int		j;

	i = 0;
	while (s1[i] && s1[i] != '\n')
		i++;
	if (!s1[i])
		return (double_free(&s1, NULL));
	new_buffer = ft_calloc(ft_strlen(s1) - i, sizeof(char));
	if (!new_buffer)
		return (double_free(&s1, NULL));
	i++;
	j = 0;
	while (s1[i])
		new_buffer[j++] = s1[i++];
	double_free(&s1, NULL);
	return (new_buffer);
}
/* Find the index of the first occurrence of '\n' or the end of the string */
/* Free memory and return null if no '\n' is found */
/* Allocate memory for the new buffer */
/* Free memory and return null if memory allocation fails */
/* Copy characters from s1 starting from i to new_buffer */
/* Free memory allocated to s1 */
/* Return the new buffer */

/* ft_free_join */

/* Function to concatenate gps and s1 into tmp */
char	*ft_free_join(char *s1, char *gps)
{
	char	*tmp;

	tmp = ft_strjoin(gps, s1);
	if (!tmp)
		return (double_free(&s1, &gps));
	double_free(&gps, NULL);
	return (tmp);
}
/* Concatenate gps and s1 into tmp */
/* Free memory and return null if memory allocation fails */
/* Free memory allocated to gps */
/* Return tmp */

/* ft_reader */

/* Function to read BUFFER_SIZE number of bytes from fd into s1 */
char	*fd_reader(int fd, char *gps)
{
	char	*s1;
	int		bytes;

	bytes = 1;
	s1 = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!s1)
		return (double_free(&gps, NULL));
	while (bytes > 0)
	{
		bytes = read(fd, s1, BUFFER_SIZE);
		if (bytes < 0)
			return (double_free(&s1, &gps));
		s1[bytes] = '\0';
		gps = ft_free_join(s1, gps);
		if (!gps)
			return (NULL);
		if (ft_strchr(s1, '\n'))
			break ;
	}
	double_free(&s1, NULL);
	return (gps);
}
/* Allocate memory for the temporary buffer s1 */
/* Free memory and return null if memory allocation fails */
/* Read BUFFER_SIZE number of bytes from fd into s1 */
/* Free memory and return null if read operation fails */
/* Add null terminator to the end of s1 */
/* Concatenate s1 and gps into gps */
/* Return null if memory allocation fails during concatenation */
/* If '\n' is found in s1, exit the loop */
/* Free memory allocated to s1 */
/* Return gps */

/* get_next_line */

/* Function to read a line from a file descriptor */
char	*get_next_line(int fd)
{
	char		*line;
	static char	*gps = NULL;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		if (gps)
			double_free(&gps, NULL);
		return (NULL);
	}
	if (!gps)
		gps = ft_calloc(1, 1);
	if (!gps)
		return (double_free(&gps, NULL));
	gps = fd_reader(fd, gps);
	if (!gps)
		return (NULL);
	line = ft_get_line(gps, line);
	if (!line || *line == '\0')
		return (double_free(&line, &gps));
	gps = next_buffer(gps);
	return (line);
}
/* Free memory allocated to gps if fd or BUFFER_SIZE is invalid */
/* Return null */
/* Initialize gps if it's not already initialized */
/* Free memory and return null if memory allocation fails */
/* Read from fd into gps */
/* Return null if reading fails */
/* Get the line from gps */
/* Free memory and return null if line is empty */
/* Get the next buffer from gps */
/* Return the line */
