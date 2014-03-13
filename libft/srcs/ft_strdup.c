/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:35:30 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/27 18:24:51 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s1))) == NULL)
		return (NULL);
	str = ft_strcpy(str, (char *)s1);
	return (str);
}
