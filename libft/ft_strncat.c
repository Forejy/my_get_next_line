/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 21:02:46 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 19:32:38 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncat(char *dest, char const *src, size_t nb)
{
	char *dst;

	dst = dest;
	while (*dst++ != '\0')
	{
	}
	dst--;
	while (*src != '\0' && nb > 0)
	{
		*dst = *src;
		nb--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dest);
}
