/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:30:54 by alexsanc          #+#    #+#             */
/*   Updated: 2023/07/02 13:00:18 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 500
#endif

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* UTILS TO USE */
char *double_free(char **buff, char **buff_);
void *ft_calloc(size_t count, size_t size);
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *s, int c);

/* MAIN FUNCTION */
char *get_next_line(int fd);
#endif