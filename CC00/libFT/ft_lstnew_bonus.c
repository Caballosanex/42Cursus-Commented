/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:57:54 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/10 12:19:50 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* The function takes in a parameter called content, which is a void pointer.
Creates a new node called new.
Checks if new is NULL. If it is, the function returns 0.
Sets the content of new to content.
Sets the next pointer of new to NULL.
The function returns the new node.
The code above is the implementation of the function to add a new element
to a linked list. */