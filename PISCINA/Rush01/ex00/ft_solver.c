/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:50:54 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/17 20:27:18 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printresult(int tab[4][4]);

void	ft_solver(char *ptrup, char *ptrdown, char *ptrleft, char *ptrright)
{
	int	result[4][4];
	int	i;

	**result = 0;
	i = 0;
	while (i < 4)
	{
			result[i][0] = 0;
			result[i][1] = 0;
			result[i][2] = 0;
			result[i][3] = 0;
		if (ptrup[i] == '4')
		{
			result[i][0] = 1;
			result[i][1] = 2;
			result[i][2] = 3;
			result[i][3] = 4;
		}
		if (ptrdown[i] == '4')
		{
			result[i][3] = 1;
			result[i][2] = 2;
			result[i][1] = 3;
			result[i][0] = 4;
		}
		if (ptrup[i] == '1')
			result[i][0] = 4;
		if (ptrdown[i] == '1')
			result[i][3] = 4;
		if (ptrleft[i] == '1')
			result[0][i] = 4;
		if (ptrright[i] == '1')
			result[3][i] = 4;
		if (ptrleft[i] == '4')
		{
			result[0][i] = 1;
			result[1][i] = 2;
			result[2][i] = 3;
			result[3][i] = 4;
		}
		if (ptrright[i] == '4')
		{
			result[3][i] = 1;
			result[2][i] = 2;
			result[1][i] = 3;
			result[0][i] = 4;
		}
		i++;
	}
	ft_printresult(result);
}
