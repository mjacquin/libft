/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:26:51 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:26:04 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*tmp;

	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	tmp = str;
	while (len--)
		*tmp++ = s[start++];
	return (str);
}
