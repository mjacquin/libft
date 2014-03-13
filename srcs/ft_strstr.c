/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:33:03 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:06:53 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*src;
	const char	*find;
	const char	*pos;

	src = s1;
	if (!*s2)
		return ((char *)s1);
	while (*src)
	{
		find = s2;
		pos = src;
		while (*src && *find && *src == *find)
		{
			src++;
			find++;
		}
		if (!*find)
			return ((char *)pos);
		src = pos + 1;
	}
	return (NULL);
}
