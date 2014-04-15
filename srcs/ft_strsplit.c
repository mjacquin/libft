/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:50:22 by mjacquin          #+#    #+#             */
/*   Updated: 2014/03/18 17:38:32 by mjacquin         ###   ########.fr       */
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

static size_t	word_len(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		word;

	i = 0;
	word = ft_word_count(s, c);
	if ((tab = (char **)ft_memalloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		word = word_len(s, c);
		if (word)
		{
			tab[i++] = ft_strsub(s, 0, word);
			tab[i] = 0;
			s += word;
		}
		s += *s ? 1 : 0;
	}
	return (tab);
}
