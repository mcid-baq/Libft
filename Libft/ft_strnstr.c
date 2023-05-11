/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:39:58 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/25 13:52:38 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[x] && x < n)
	{
		y = 0;
		while (s1[x + y] == s2[y] && x + y < n)
		{
			if (s2[++y] == 0)
				return ((char *)&s1[x]);
		}
		x++;
	}
	return (0);
}
