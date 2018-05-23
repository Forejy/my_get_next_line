/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:35:28 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 18:31:30 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	ft_list_push_back(t_list **begin_list, void *data, size_t data_size)
{
	t_list	*current;

	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = ft_lstnew(data, data_size);
		return ;
	}
	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = ft_lstnew(data, data_size);
}
