/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:57:59 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/11 13:06:37 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* The function ft_lstiter() takes two parameters, first is a pointer to the
first link of a list and the second is a function pointer that takes a
parameter of type void* and returns void.
The function iterates the list lst and applies the function f to the
content of each element.
The function doesn't return anything. */