/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 20:19:12 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 20:19:12 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char const *str, char const *base, int base_len)
{
	int i;
	int number;
	int sign;
	int stop;

	number = 0;
	stop = 0;
	sign = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	i = 0;
	while (*str != '\0' && !stop)
	{
		number *= base_len;
		i = 0;
		while (base[i] != *str && base[i] != '\0')
			i++;
		number += i;
		str++;
		stop = (base[i] == '\0');
	}
	return (number * sign);
}
