/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:55:00 by alexsanc          #+#    #+#             */
/*   Updated: 2022/07/25 15:24:02 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str [i + k] != '\0' && str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (&str[i]);
			++k;
		}
		++i;
	}
	return (0);
}
