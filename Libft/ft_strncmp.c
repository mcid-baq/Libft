/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:39:59 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/20 17:45:52 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	c1;
	char	c2;

	while (n)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return ((unsigned char)c1 - (unsigned char)c2);
		if (c1 == 0)
			break ;
		n--;
	}
	return (0);
}
