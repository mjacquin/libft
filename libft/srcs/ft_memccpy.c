/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:07:10 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 14:45:18 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*tmp;
	char	*tmp2;

	tmp = s1;
	tmp2 = (char *)s2;
	while (n--)
	{
		*tmp++ = *tmp2;
		if (*tmp2 == (unsigned char)c)
			return (tmp);
		tmp2++;
	}
	return (NULL);
}
