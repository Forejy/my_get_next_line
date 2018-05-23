/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:24:42 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/06 18:43:12 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	char			*dst_tmp;
	unsigned int	i;

	i = 0;
	dst_tmp = dest;
	while (*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	while (i++ < n)
		*dest++ = '\0';
	return (dst_tmp);
}
