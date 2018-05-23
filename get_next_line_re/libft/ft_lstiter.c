/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:53:02 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 16:05:06 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *ptr, void (*fn)(t_list *elem))
{
	while (ptr != NULL)
	{
		fn(ptr);
		ptr = ptr->next;
	}
}
