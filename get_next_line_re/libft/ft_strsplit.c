/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 19:18:37 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/09 19:26:10 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static void	ft_split_foo(char **tab, char const *input, char c, int word_count)
{
	char const	*str;
	char const	*tmp;
	int			i;

	i = 0;
	str = input;
	while (i < word_count)
	{
		if (*str != c)
		{
			tmp = str;
			while (*tmp != c && *tmp)
				tmp++;
			tab[i] = malloc(sizeof(char) * ((tmp - str) + 1));
			if (tab[i] == NULL)
				return ;
			ft_strncpy(tab[i], str, (tmp - str));
			tab[i][tmp - str] = '\0';
			i++;
			str = tmp;
		}
		while (*str == c && *str)
			str++;
	}
}

char		**ft_strsplit(char const *input, char c)
{
	char const	*str;
	char		**tab;
	int			word_count;

	if (ALLOW_SILENT_FAIL && (input == NULL))
		return (NULL);
	str = input;
	word_count = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			word_count++;
			while (*str != c && *str)
				str++;
		}
		while (*str == c && *str)
			str++;
	}
	tab = malloc(sizeof(char*) * (word_count + 1));
	if (tab == NULL)
		return (NULL);
	tab[word_count] = NULL;
	ft_split_foo(tab, input, c, word_count);
	return (tab);
}
