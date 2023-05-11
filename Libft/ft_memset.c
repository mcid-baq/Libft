/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:16:38 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/19 13:19:18 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*apple;

	apple = s;
	while (n > 0)
	{
		*apple = (unsigned char)c;
		n--;
		apple++;
	}
	return (s);
}
