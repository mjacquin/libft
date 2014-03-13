/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 15:39:06 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/27 16:49:07 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	void		*new;
	size_t		len;

	if (ptr != NULL)
	{
		len = ft_strlen(ptr);
		size = size == 0 ? len + 1 : size;
		if ((new = (void *)ft_memalloc(size)) == NULL)
			return (NULL);
		ft_memcpy(new, ptr, size);
		ft_memdel(&ptr);
	}
	else
		new = (void *)ft_memalloc(size);
	return (new);
}
