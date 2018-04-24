/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 20:15:53 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/10 20:16:49 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_power(int a, int power)
{
	if (power <= 0)
		return (1);
	return (a * ft_power(a, power - 1));
}

static void		*itoa_base_alloc_string(int *len, int nb, int base_len)
{
	int		number;
	int		str_len;
	char	*temp;

	str_len = 0;
	number = (nb < 0) ? -nb : nb;
	while (number != 0)
	{
		number /= base_len;
		str_len++;
	}
	*len = str_len;
	if (nb < 0)
		str_len++;
	temp = malloc(sizeof(char) * (str_len + 1));
	temp[str_len] = '\0';
	return (temp);
}

char			*ft_itoa_base(int nb, char const *base, int base_len)
{
	unsigned int	number;
	int				diviseur;
	int				len;
	char			*string;
	char			*tmp;

	string = itoa_base_alloc_string(&len, nb, base_len);
	tmp = string;
	if (nb == 0)
		*string = base[0];
	number = (nb < 0) ? -nb : nb;
	if (nb < 0)
		*tmp++ = '-';
	diviseur = ft_power(base_len, len - 1);
	while (diviseur > 0)
	{
		*tmp++ = base[number / diviseur];
		number %= diviseur;
		diviseur /= base_len;
	}
	return (string);
}
