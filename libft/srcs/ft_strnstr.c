/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:01:29 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:07:40 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*src;
	const char	*find;
	const char	*pos;
	size_t		i;

	src = s1;
	if (!*s2)
		return ((char *)s1);
	while (*src && n)
	{
		i = 0;
		find = s2;
		pos = src;
		while (*src && *find && *src == *find && (n - i++) > 0)
		{
			src++;
			find++;
		}
		if (!*find)
			return ((char *)pos);
		src = pos + 1;
		n--;
	}
	return (NULL);
}
