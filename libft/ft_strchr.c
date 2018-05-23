/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:52:41 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 20:01:24 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char const *s, int to_find_i)
{
	char to_find;

	to_find = (char)to_find_i;
	while (*s != '\0')
	{
		if (*s == to_find)
			return ((char *)s);
		s++;
	}
	if (*s == to_find && *s == '\0')
		return ((char *)s);
	else
		return (NULL);
}
