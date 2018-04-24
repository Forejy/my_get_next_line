/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:34:54 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 20:22:58 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int		is_in_charset(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

static void		split2(char **tab, char *input, int word_count, char *charset)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 0;
	str = input;
	while (i < word_count)
	{
		if (!is_in_charset(*str, charset))
		{
			tmp = str;
			while (!is_in_charset(*tmp, charset) && *tmp)
				tmp++;
			tab[i] = malloc(sizeof(char) * ((tmp - str) + 1));
			tab[i][tmp - str] = '\0';
			ft_strncpy(tab[i], str, (tmp - str));
			i++;
			str = tmp;
		}
		while (is_in_charset(*str, charset) && *str)
			str++;
	}
}

char			**ft_strsplit_charset(char *input, char *charset)
{
	char	**tab;
	char	*str;
	int		word_count;

	str = input;
	word_count = 0;
	while (*str != '\0')
	{
		if (!is_in_charset(*str, charset))
		{
			word_count++;
			while (!is_in_charset(*str, charset) && *str)
				str++;
		}
		while (is_in_charset(*str, charset) && *str)
			str++;
	}
	tab = malloc(sizeof(char*) * (word_count + 1));
	tab[word_count] = NULL;
	split2(tab, input, word_count, charset);
	return (tab);
}
