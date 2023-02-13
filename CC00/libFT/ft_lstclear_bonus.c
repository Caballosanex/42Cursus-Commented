/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:58:02 by alexsanc          #+#    #+#             */
/*   Updated: 2023/02/13 15:05:55 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* In the first line, we check if the list or the del function is NULL.
If yes, we return nothing.
We create a temporary pointer to point to the next node and
we set it to the first node.
We delete the first node and set the first node to the second node.
We continue until we reach the last node.
We set the pointer to the last node to NULL. */
