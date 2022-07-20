/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:23:13 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 20:37:49 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	*ft_rush(char *n);

int	main(int argc, char	*argv[])
{
	int		i;
	int		j;
	char	str[16];
	char	*args;

	args = argv[1];
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	else
	{
		i = 0;
		j = 0;
		while (args[i] && j < 16)
		{
			if (args[i] >= '1' && args[i] <= '4')
				str[j] = args[i];
			else if (args[i] != 32)
			{
				write (1, "Error\n", 6);
				return (1);
			}		
			i += 2;
			j++;
		}
		ft_rush(str);
	}
	return (0);
}
