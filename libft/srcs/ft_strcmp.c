/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:44:43 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:08:23 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (*a || *b)
	{
		if (*a != *b)
			return (*a - *b);
		a += *a ? 1 : 0;
		b += *b ? 1 : 0;
	}
	return (0);
}
