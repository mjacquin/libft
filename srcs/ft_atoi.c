/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:00:01 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:11:08 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		n;
	int		neg;

	n = 0;
	while (*str == '\n' || *str == '\v' || *str == '\t' || *str == '\r'
		|| *str == '\f' || *str == ' ')
		str++;
	neg = *str == '-' ? 1 : 0;
	str += neg || (*str == '+') ? 1 : 0;
	while (ft_isdigit(*str))
		n = n * 10 + (*str++ - '0');
	if (neg)
		return (-n);
	return (n);
}
