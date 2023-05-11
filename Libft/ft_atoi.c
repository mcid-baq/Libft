/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:05:24 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/04/20 12:10:08 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	symbol;
	int	result;
	int	x;

	result = 0;
	symbol = 1;
	x = 0;
	while (str[x] && (str[x] == '\f' || str[x] == '\t' || str[x] == ' '
			|| str[x] == '\n' || str[x] == '\r' || str[x] == '\v'))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			symbol *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (result * 10) + str[x] - '0';
		x++;
	}
	return (result * symbol);
}
