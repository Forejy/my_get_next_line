/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:58:12 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 11:05:20 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (ALLOW_SILENT_FAIL && (s == NULL))
		return ;
	write(fd, s, ft_strlen(s));
}
