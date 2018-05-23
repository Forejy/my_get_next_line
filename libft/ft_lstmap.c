/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:05:44 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 18:51:54 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *ptr, t_list *(*fn)(t_list *elem))
{
	t_list	*new_elem;
	t_list	*new_list;

	new_list = NULL;
	while (ptr != NULL)
	{
		new_elem = fn(ptr);
		ft_list_push_back(&new_list, new_elem->content, new_elem->content_size);
		ptr = ptr->next;
	}
	return (new_list);
}
