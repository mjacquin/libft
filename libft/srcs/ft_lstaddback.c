/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 13:21:26 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/09 13:24:47 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstaddback(t_list **lst, t_list *new)
{
	t_list		*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp->next = tmp->next->next;
		tmp->next = new;
	}
}
