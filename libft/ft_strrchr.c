/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:52:41 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/11 14:20:03 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char const *s, int to_find_i)
{
	char const	*last_found;
	char		to_find;

	last_found = NULL;
	to_find = (char)to_find_i;
	while (*s != '\0')
	{
		if (*s == to_find)
			last_found = s;
		s++;
	}
	if (*s == to_find && *s == '\0')
		last_found = s;
	return ((char *)last_found);
}
