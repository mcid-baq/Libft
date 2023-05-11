/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:17:36 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/05/08 12:23:37 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*auxi;
	size_t	auxilst;

	auxilst = ((auxi = *lst) == 0);
	if (auxilst)
		return ;
	while (auxi)
	{
		temp = auxi->next;
		del(auxi->content);
		free(auxi);
		auxi = temp;
	}
	*lst = NULL;
}
