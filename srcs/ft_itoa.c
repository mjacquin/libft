/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:20:45 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/17 14:07:47 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		itoa_count(int n)
{
	int		i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		i;
	int		spec;
	char	*str;

	spec = (n == -2147483648 ? 1 : 0);
	i = 0;
	if (n < 0)
	{
		i++;
		n = -n - (spec ? 1 : 0);
	}
	i += itoa_count(n);
	str = ft_strnew(i);
	if (n == 0)
		str[--i] = '0';
	while (n > 0)
	{
		str[--i] = n % 10 + '0';
		n /= 10;
	}
	str[0] = (i == 1 ? '-' : str[0]);
	if (spec)
		str[10] = '8';
	return (str);
}
