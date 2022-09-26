/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:34:52 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/18 15:57:09 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char *str;
	int	val;
	
	str = "Buginette";
	val = ft_strlen(str);

	printf("%d", val);
	return (0);

}*/
