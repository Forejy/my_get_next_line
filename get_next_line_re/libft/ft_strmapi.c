/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:49:10 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/07 19:55:44 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

static void	static_striteri(char *string, char (*fn)(unsigned int, char))
{
	unsigned int i;

	i = 0;
	while (*string != '\0')
	{
		*string = fn(i++, *string);
		string++;
	}
}

char		*ft_strmapi(char const *string, char (*fn)(unsigned int, char))
{
	char *new_string;

	if (ALLOW_SILENT_FAIL && (string == NULL || fn == NULL))
		return (NULL);
	new_string = ft_strdup(string);
	if (new_string == NULL)
		return (NULL);
	static_striteri(new_string, fn);
	return (new_string);
}
