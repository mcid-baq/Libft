/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:03:51 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/05/10 12:47:27 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		size;
	int		x;

	size = ft_strlen(s);
	string = malloc(size * sizeof(char) + 1);
	if (string == 0)
		return (0);
	x = 0;
	while (s[x])
	{
		string[x] = f(x, s[x]);
		x++;
	}
	string[x] = '\0';
	return (string);
}
