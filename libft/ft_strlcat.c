/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 21:11:16 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 19:44:40 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	char	*dst;
	size_t	src_len;
	size_t	dst_len;
	size_t	chars_copied;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	chars_copied = 0;
	if (dst_len >= size)
		return (src_len + size);
	dst = dest + dst_len;
	while (*src != '\0' && (chars_copied < (size - dst_len - 1)))
	{
		*dst++ = *src++;
		chars_copied++;
	}
	*dst = '\0';
	return (src_len + dst_len);
}
