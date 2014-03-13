/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 15:28:33 by mjacquin          #+#    #+#             */
/*   Updated: 2014/01/26 15:41:14 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lst_fnode(t_lst **x)
{
	if (*x == NULL)
		return ;
	ft_strdel(&(*x)->str);
	(*x)->len = 0;
	(*x)->next = NULL;
	ft_memdel((void *)x);
}

void		ft_lst_del(t_lst **lst)
{
	while (*lst)
		ft_lst_dnode(lst, *lst);
}

void		ft_print_lst(t_lst *lst)
{
	while (lst)
	{
		ft_putendl(lst->str);
		lst = lst->next;
	}
}
