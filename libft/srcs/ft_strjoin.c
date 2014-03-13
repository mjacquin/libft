/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:40:30 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:27:44 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	if ((str = ft_strnew(len + ft_strlen(s2))) == NULL)
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcpy(str + len, s2);
	return (str - len);
}
