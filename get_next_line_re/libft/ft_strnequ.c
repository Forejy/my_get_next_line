/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:30:47 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 19:19:38 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

int		ft_strnequ(char const *a, char const *b, size_t count)
{
	size_t i;

	if (ALLOW_SILENT_FAIL && (a == NULL || b == NULL))
		return (1);
	if (count == 0)
		return (1);
	i = 0;
	while (*a != '\0' && *b != '\0')
	{
		if (i >= count)
			return (1);
		if (*a != *b)
			return (0);
		a++;
		b++;
		i++;
	}
	return (*a == *b);
}
