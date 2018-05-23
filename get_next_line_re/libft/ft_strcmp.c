/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:31:35 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/02/14 20:31:40 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char const *s1, char const *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (int)((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (int)((unsigned char)*s1 - (unsigned char)*s2);
}
