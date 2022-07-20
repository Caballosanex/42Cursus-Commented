/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:28:07 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/19 13:23:38 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	revi;
	int	swap;

	i = 0;
	revi = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[revi];
		tab[revi] = swap;
		i++;
		revi--;
	}	
}
