/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:33:24 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 20:19:02 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value;
	int		in_base_len;
	int		out_base_len;
	int		i;
	char	*res;

	i = 0;
	in_base_len = 0;
	while (base_from[i++] != '\0')
	{
		in_base_len++;
	}
	i = 0;
	out_base_len = 0;
	while (base_to[i++] != '\0')
	{
		out_base_len++;
	}
	value = ft_atoi_base(nbr, base_from, in_base_len);
	res = ft_itoa_base(value, base_to, out_base_len);
	return (res);
}
