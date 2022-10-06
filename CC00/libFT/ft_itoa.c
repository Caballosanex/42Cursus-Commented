/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:02:52 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/06 11:25:22 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* We calculate the length of the number by dividing it by 10 over and over again
until it is equal to zero.
2. If the number is negative, we add 1 to the length of the number.
3. If the number is equal to 0, we add 1 to the length of the number.

The next step is to create a string to store the converted number.
We use malloc to allocate memory for the string.
We create a pointer to the end of the string and initialize it with the length of the string.
We set the last character of the string to the null character.
Next, we check if the number is negative.
If it is, we set the first character of the string to the minus sign.
If the number is equal to 0, we set the first character of the string to the digit zero.
Then we convert the number to a string by using the modulo operator to get the last digit
and then we decrement the pointer to the end of the string.
We do this until the number is equal to zero. */

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	neg = 0;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
