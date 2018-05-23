/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 16:45:29 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 19:26:16 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int to_find_i, size_t count)
{
	const unsigned char	*ptr;
	unsigned char		to_find;
	size_t				i;

	i = 0;
	ptr = s;
	to_find = (unsigned char)to_find_i;
	while (i < count && ptr[i] != to_find)
		i++;
	if (i < count && ptr[i] == to_find)
		return (void *)(s + i);
	else
		return (NULL);
}
