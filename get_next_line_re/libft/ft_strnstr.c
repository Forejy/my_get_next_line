/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:29:25 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 20:56:32 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	strnequal(char *string, char *substring, size_t length)
{
	size_t i;

	i = 0;
	while (*substring != '\0' && i <= length)
	{
		if (*string != *substring)
			return (0);
		string++;
		substring++;
		i++;
	}
	return (i <= length);
}

char		*ft_strnstr(char *str, char *to_find, size_t length)
{
	char	*to_find_start;
	char	*str_start;

	str_start = str;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && ((size_t)(str - str_start) < length))
	{
		to_find_start = str;
		if (strnequal(str, to_find, (length - (str - str_start))))
			return (to_find_start);
		str++;
	}
	return (NULL);
}
