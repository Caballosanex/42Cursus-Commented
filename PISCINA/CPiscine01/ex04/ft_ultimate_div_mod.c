/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:06:20 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/18 13:30:49 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 42;
	ft_ultimate_div_mod(&a, &b);
	//Aqui aniria un printf definit per a
	//fer print dels valors actualitzats 
	//posteriors a les operacions.	
	return (0);
*/
