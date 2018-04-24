/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:20:45 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 17:59:44 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a_v, const void *b_v, size_t count)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = a_v;
	b = b_v;
	i = 0;
	while (i < count)
	{
		if (a[i] != b[i])
			break ;
		i++;
	}
	if (i < count && a[i] != b[i])
		return (a[i] - b[i]);
	else
		return (0);
}
