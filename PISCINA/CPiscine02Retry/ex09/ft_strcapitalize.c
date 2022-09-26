/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:31:05 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/24 16:31:11 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			str[i - 1] = str[i - 1] - 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "H0l4 Que Tal? Esto+es+Una+PRUEBA";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
