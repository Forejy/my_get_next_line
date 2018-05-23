/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 18:26:14 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/07 19:30:09 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *string)
{
	if (ALLOW_SILENT_FAIL && (string == NULL))
		return ;
	while (*string != '\0')
		*string++ = '\0';
}
