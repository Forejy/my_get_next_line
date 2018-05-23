/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:22:18 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/09 14:32:11 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

char	*ft_strsub(char const *string, size_t start, size_t length)
{
	char *new;

	if (ALLOW_SILENT_FAIL && (string == NULL))
		return (NULL);
	new = ft_strnew(length);
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, string + start, length);
	return (new);
}
