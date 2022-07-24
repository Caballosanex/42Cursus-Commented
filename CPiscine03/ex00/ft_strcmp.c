/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:53:45 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/23 16:25:45 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *str1 = "abc";
	char *str2 = "def";

	printf("Res: %d", ft_strcmp(str1, str2));
}
*/
