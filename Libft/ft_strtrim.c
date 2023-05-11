/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:11:16 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/05/02 11:19:50 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str1, char const *set)
{
	size_t	counter;
	size_t	length;

	counter = 0;
	length = ft_strlen(str1);
	if (str1 == 0 || set == 0)
		return (0);
	if (str1[counter] == 0 && length == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, str1[counter]))
		counter++;
	while (ft_strchr(set, str1[length]))
		length--;
	return (ft_substr(str1, counter, length - counter + 1));
}
