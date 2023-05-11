/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:23:04 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/20 12:31:20 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (!dest && !src)
		return (0);
	while (c < n)
	{
		((unsigned char *)dest)[c] = ((const unsigned char *)src)[c];
		c++;
	}
	return (dest);
}
