/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:41:27 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/09 19:04:00 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *string)
{
	size_t	i;
	size_t	end;

	if (ALLOW_SILENT_FAIL && (string == NULL))
		return (NULL);
	while (is_whitespace(*string) && *string != '\0')
		string++;
	i = 0;
	end = 0;
	while (string[i] != '\0')
	{
		if (is_whitespace(string[i]) == 0)
		{
			end = i;
			while (is_whitespace(string[end]) == 0 && string[end] != '\0')
				end++;
			i = end;
		}
		while (is_whitespace(string[i]) && string[i] != '\0')
			i++;
	}
	return (ft_strsub(string, 0, end));
}
