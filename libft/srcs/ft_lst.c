/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 15:06:20 by mjacquin          #+#    #+#             */
/*   Updated: 2014/01/29 18:27:47 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_lst		*ft_lst_cnode(char *str, size_t len)
{
	t_lst		*x;

	if ((x = (t_lst *)malloc(sizeof(*x))) == NULL)
		return (NULL);
	if ((x->str = ft_strnew(len)) == NULL)
		return (NULL);
	x->str = ft_memcpy(x->str, str, len);
	x->len = len;
	x->next = NULL;
	return (x);
}

void		ft_lst_anode(t_lst **lst, t_lst *x)
{
	x->next = *lst;
	*lst = x;
}

void		ft_lst_abnode(t_lst **lst, t_lst *x)
{
	t_lst		*tmp;

	if (*lst == NULL)
		*lst = x;
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = x;
	}
}

void		ft_lst_dnode(t_lst **lst, t_lst *x)
{
	t_lst		*tmp;
	t_lst		*prev;

	tmp = *lst;
	if (tmp == x)
	{
		*lst = tmp->next;
		ft_lst_fnode(&tmp);
	}
	else
	{
		while (tmp)
		{
			if (tmp == x)
			{
				prev->next = tmp->next;
				ft_lst_fnode(&x);
				break ;
			}
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
