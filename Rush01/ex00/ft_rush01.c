/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:22:36 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 18:09:52 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_colup(char *a);
char		*ft_coldown(char *a);
char		*ft_rowleft(char *a);
char		*ft_rowright(char *a);
void		ft_solver(char *ptrup, char *ptrdown,
				char *ptrleft, char *ptrright);

void	ft_rush(char *n)
{
	char	colup[4];
	char	coldown[4];
	char	rowleft[4];
	char	rowright[4];

	*colup = '0';
	*coldown = '0';
	*rowleft = '0';
	*rowright = '0';
	*colup = *ft_colup(n);
	*coldown = *ft_coldown(n);
	*rowleft = *ft_rowleft(n);
	*rowright = *ft_rowright(n);
	ft_solver(colup, coldown, rowleft, rowright);
}
