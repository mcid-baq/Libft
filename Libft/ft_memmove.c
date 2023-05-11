/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:45:54 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/20 13:10:30 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *sourc, size_t leng)
{
	void	*ret;

	if (!dest && !sourc)
		return (0);
	ret = dest;
	if (sourc < dest)
	{
		sourc += leng;
		dest += leng;
		while (leng--)
			*(char *)--dest = *(char *)--sourc;
	}
	else
		while (leng--)
			*(char *)dest++ = *(char *)sourc++;
	return (ret);
}
