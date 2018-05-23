/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 18:35:08 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/07 19:46:33 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

static void	static_striter(char *string, char (*fn)(char))
{
	while (*string != '\0')
	{
		*string = fn(*string);
		string++;
	}
}

char		*ft_strmap(char const *string, char (*fn)(char))
{
	char *new_string;

	if (ALLOW_SILENT_FAIL && (string == NULL || fn == NULL))
		return (NULL);
	new_string = ft_strdup(string);
	if (new_string == NULL)
		return (NULL);
	static_striter(new_string, fn);
	return (new_string);
}
