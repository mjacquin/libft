/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:56:07 by mjacquin          #+#    #+#             */
/*   Updated: 2014/01/09 20:19:58 by mjacquin         ###   ########.fr       */
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
	char		*str;
	size_t		len;
	size_t		start;
	size_t		end;

	len = ft_strlen(s);
	start = 0;
	end = 0;
	while (bad_char(s[start]))
		start++;
	while (bad_char(s[len - end - 1]))
		end++;
	if ((str = ft_strnew(len - end - start + 1)) == NULL)
		return (NULL);
	return (str = ft_strsub(s, start, len - start - end));
}
