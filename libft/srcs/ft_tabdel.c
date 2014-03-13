/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:47:14 by mjacquin          #+#    #+#             */
/*   Updated: 2014/02/07 20:22:56 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void		ft_tabdel(char ***array)
{
	char	**tmp;

	tmp = *array;
	while (*tmp)
	{
		ft_strdel(tmp);
		tmp++;
	}
	ft_strdel(tmp);
	free(*array);
	*array = NULL;
}
