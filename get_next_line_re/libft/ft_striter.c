/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 18:29:51 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/07 19:30:09 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *string, void (*fn)(char *))
{
	if (ALLOW_SILENT_FAIL && (string == NULL || fn == NULL))
		return ;
	while (*string != '\0')
		fn(string++);
}
