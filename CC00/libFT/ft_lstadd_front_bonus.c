/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:58:04 by alexsanc          #+#    #+#             */
/*   Updated: 2023/02/13 15:09:54 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* We have a pointer to the beginning of the list in the variable **lst.
We have a pointer to the new element in the variable *new.
We check if the pointers are not NULL.
We assign the address of the first element
to the next element of the new element.
We assign the address of the new element to the beginning of the list. */