/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:07:53 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/13 12:37:51 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*begin;

	new = lst;
	tmp = lst;
	if (tmp)
	{
		tmp = f(tmp);
		if ((new = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	begin = new;
	while (tmp)
	{
		tmp = f(tmp);
		if ((new->next = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (begin);
}
