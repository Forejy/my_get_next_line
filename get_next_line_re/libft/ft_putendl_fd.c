/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:03:03 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 11:06:51 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (ALLOW_SILENT_FAIL && (s == NULL))
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
