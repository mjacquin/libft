/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:31:08 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 14:45:02 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char			*dst;
	const unsigned char		*src;

	dst = s1;
	src = s2;
	while (n--)
		*dst++ = *src++;
	return (s1);
}
