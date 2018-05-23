/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:54:46 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/03/01 20:54:47 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	ft_list_foreach(t_list *ptr, void (*f)(void*, size_t))
{
	while (ptr != NULL)
	{
		f(ptr->content, ptr->content_size);
		ptr = ptr->next;
	}
}
