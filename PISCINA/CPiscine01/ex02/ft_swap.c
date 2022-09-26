/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:54:59 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/15 16:35:08 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
//int	main(void)
//{
//	int	a = 1;
//	int	b = 2;
//	int	*pa = &a;
//	int	*pb = &b;
//
//	ft_swap(pa, pb);
//	printf("%d %d", a, b);
//	return (0);
//}
