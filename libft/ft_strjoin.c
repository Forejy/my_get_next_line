/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:41:37 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/09 19:07:45 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	size_t	length_a;
	size_t	length_b;
	char	*new;

	if (ALLOW_SILENT_FAIL && (a == NULL || b == NULL))
		return (NULL);
	length_a = ft_strlen(a);
	length_b = ft_strlen(b);
	new = ft_strnew(length_a + length_b);
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, a, length_a);
	ft_strncpy(new + length_a, b, length_b);
	return (new);
}
