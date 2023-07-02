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

char *ft_get_line(char *gps, char *line)
{
	int i;

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

char *next_buffer(char *s1)
{
	char *new_buffer;
	int i;
	int j;

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

char *ft_free_join(char *s1, char *gps)
{
	char *tmp;

	tmp = ft_strjoin(gps, s1);
	if (!tmp)
		return (double_free(&s1, &gps));
	double_free(&gps, NULL);
	return (tmp);
}

char *fd_reader(int fd, char *gps)
{
	char *s1;
	int bytes;

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
			break;
	}
	double_free(&s1, NULL);
	return (gps);
}

char *get_next_line(int fd)
{
	char *line;
	static char *gps = NULL;

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

// int main()
// {
// 	int	fd = open("multiple_nl.txt", O_RDONLY);
// 	//printf ("%s",get_next_line(fd));
// 	char *str = get_next_line(fd);
// 	// printf ("%s",get_next_line(fd));
// 	// while (printf("%s",get_next_line(fd)))
// 	// 	i++;
// 	close(fd);
// 	return(0);
// }