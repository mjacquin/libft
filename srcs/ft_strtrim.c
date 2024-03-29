/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:56:07 by mjacquin          #+#    #+#             */
/*   Updated: 2014/03/26 15:12:53 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bad_char(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		end;

	while (*s && bad_char(*s))
		s++;
	len = ft_strlen(s);
	end = 0;
	while (len - end > 0 && bad_char(s[len - end - 1]))
		end++;
	if (len - end == 0)
		return (NULL);
	return (ft_strsub(s, 0, len - end));
}
