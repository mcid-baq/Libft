/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:19:21 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/26 10:33:04 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		n;
	char	*cpy;

	cpy = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (cpy == 0)
		return (0);
	n = 0;
	while (src[n] != 0)
	{
		cpy[n] = src[n];
		n++;
	}
	cpy[n] = 0;
	return (cpy);
}
