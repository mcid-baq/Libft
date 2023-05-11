/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:02:01 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/05/09 13:28:24 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*head;

	if (lst == 0)
		return (NULL);
	head = malloc(sizeof(t_list));
	if (head == 0)
		return (NULL);
	current = head;
	current->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		current->next = malloc(sizeof(t_list));
		if (!current->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		current->next->content = f(lst->content);
		current = current->next;
	}
	current->next = NULL;
	return (head);
}
