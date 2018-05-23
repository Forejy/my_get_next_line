/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 18:31:41 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/07 18:50:48 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *string, void (*fn)(unsigned int, char *))
{
	unsigned int i;

	if (ALLOW_SILENT_FAIL && (string == NULL || fn == NULL))
		return ;
	i = 0;
	while (*string != '\0')
		fn(i++, string++);
}
