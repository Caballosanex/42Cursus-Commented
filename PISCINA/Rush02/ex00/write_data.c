/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srieder <srieder@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:37:21 by srieder           #+#    #+#             */
/*   Updated: 2022/07/24 20:54:51 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}

char	*write_data(void)
{
	int		doc;
	int		numbytes;
	int		iod;
	char	buffer;
	char	*text;

	text = malloc(200 * sizeof(char));
	iod = 0;
	doc = open("./.numbers.dict", O_RDONLY);
	numbytes = read(doc, &buffer, sizeof(char));
	while (numbytes > 0)
	{
		ft_strcat(text, &buffer);
	}
	close(doc);
	free(text);
	return (text);
}
