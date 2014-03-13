/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:50:22 by mjacquin          #+#    #+#             */
/*   Updated: 2013/12/06 15:32:50 by mjacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	int			word;
	size_t		word_cnt;

	word = 0;
	word_cnt = 0;
	while (*s)
	{
		if (*s == c)
			word = 0;
		else if (!word)
		{
			word = 1;
			word_cnt++;
		}
		s++;
	}
	return (word_cnt);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**ar;
	size_t		i;
	size_t		sub;
	size_t		word;

	i = 0;
	word = ft_word_count(s, c);
	if ((ar = (char **)ft_memalloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	ar[word] = '\0';
	while (*s && word--)
	{
		sub = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			sub++;
		}
		ar[i++] = ft_strsub(s - sub, 0, sub);
		s++;
	}
	return (ar);
}
