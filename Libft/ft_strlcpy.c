/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:55:44 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/21 12:58:43 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dest, const char *sourc, size_t size)
{
	size_t	x;

	x = 0;
	while (*sourc && x + 1 < size)
	{
		*dest++ = *sourc++;
		x++;
	}
	if (x < size)
		*dest = 0;
	while (*sourc++)
		x++;
	return (x);
}
