/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:01:57 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 15:38:22 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_lstdel(t_list **list, void (*del_fn)(void*, size_t))
{
	t_list	*current;
	t_list	*temp_next;

	if (list == NULL || del_fn == NULL)
		return ;
	current = *list;
	while (current != NULL)
	{
		temp_next = current->next;
		del_fn(current->content, current->content_size);
		free(current);
		current = temp_next;
	}
	*list = NULL;
}
