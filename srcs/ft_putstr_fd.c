/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:55:50 by mjacquin          #+#    #+#             */
/*   Updated: 2014/01/04 22:59:52 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == NULL)
		write(fd, "(null)", 6);
	else
		write(fd, s, ft_strlen(s));
}
