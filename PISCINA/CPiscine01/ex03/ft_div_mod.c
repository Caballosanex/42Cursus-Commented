/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:20:09 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/15 16:37:12 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int	main(void)
//{
//	int	a = 10;
//	int	b = 20;
//	int	div = 0;
//	int	mod = 0;
//
//	ft_div_mod(a, b, &div, &mod);
//	printf ("%d, %d", div, mod);
//	return(0);
//}
