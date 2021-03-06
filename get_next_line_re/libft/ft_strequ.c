/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 11:47:02 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/09 12:40:07 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *a, char const *b)
{
	if (ALLOW_SILENT_FAIL && (a == NULL || b == NULL))
		return (1);
	while (*a != '\0' && *b != '\0')
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (*a == *b);
}
