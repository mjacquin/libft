/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 14:50:01 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:45:52 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
		*alst = tmp;
	}
}
