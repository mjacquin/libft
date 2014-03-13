/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:03:36 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 14:47:57 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*a;
	const unsigned char		*b;

	a = s1;
	b = s2;
	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		a += 1;
		b += 1;
	}
	return (0);
}
