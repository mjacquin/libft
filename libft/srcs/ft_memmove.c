/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:11:54 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 14:46:22 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*tmp;
	int		side;

	side = (s1 <= s2 || s1 >= (s2 + n)) ? 1 : -1;
	tmp = s1;
	if (side < 0)
	{
		s1 += n - 1;
		s2 += n - 1;
	}
	while (n--)
	{
		*(char *)s1 = *(char *)s2;
		s1 += side;
		s2 += side;
	}
	return (tmp);
}
