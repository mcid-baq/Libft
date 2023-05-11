/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:14:17 by mcid-baq          #+#    #+#             */
/*   Updated: 2023/05/10 12:34:54 by mcid-baq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int	i;
	int	copy;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	copy = n;
	while (copy > 0)
	{
		copy = copy / 10;
		i++;
	}
	return (i);
}

int	ft_exp_count(int n)
{
	int	exp;
	int	digit;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digit = ft_count_digits(n);
	if (n < 0)
		digit--;
	exp = 1;
	while (--digit)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = ft_exp_count(n);
	i = 0;
	str = malloc(ft_count_digits(n) + 1);
	if (str == 0)
		return (0);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
	}
	str[i] = '\0';
	return (str);
}
