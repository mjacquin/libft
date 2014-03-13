/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:28:10 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:00:12 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s += 1;
	}
	*d = 0;
	return (dlen + (s - src));
}
