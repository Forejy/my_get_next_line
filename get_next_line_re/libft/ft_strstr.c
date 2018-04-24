/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:29:25 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/02/14 20:29:28 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*string;
	char	*to_find_temp;
	char	*start;
	int		found;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		start = str;
		string = str;
		to_find_temp = to_find;
		found = 1;
		while (*to_find_temp != '\0')
		{
			if (*string != *to_find_temp)
				found = 0;
			string++;
			to_find_temp++;
		}
		if (found)
			return (start);
		str++;
	}
	return (NULL);
}
