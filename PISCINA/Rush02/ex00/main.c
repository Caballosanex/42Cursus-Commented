/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:07:03 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/24 21:42:42 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	deconu(int nb);
int		ft_atoi(const char *str);

int	get_argv(int argc, char **dictpath)
{
	if (argc == 2)
	{
		*dictpath = "./numbers.dict";
		return (1);
	}
	return (0);
}

int	test_nb(char *nb)
{
	int	i;

	i = -1;
	while (nb[i++])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*dictpath;

	if (get_argv(argc, &dictpath) == 0 || test_nb(argv[1]) == 0)
	{
		write(1, "Error\n", 7);
	}
	else
	{
		deconu(ft_atoi(argv[1]));
		return (0);
	}
	return (0);
}
