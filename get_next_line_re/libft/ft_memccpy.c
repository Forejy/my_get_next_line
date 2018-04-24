/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:31:31 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 15:17:58 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int stop, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((char*)dst)[i] = ((char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)stop)
			break ;
		i++;
	}
	return (i == count) ? NULL : dst + i + 1;
}
