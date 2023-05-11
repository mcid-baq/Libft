/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:59:10 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/26 10:09:30 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str1;
	void	*str2;
	size_t	length;

	length = nmemb * size;
	str1 = (char *)malloc(length);
	if (str1 == 0)
		return (0);
	str2 = str1;
	ft_bzero(str2, length);
	return (str1);
}
