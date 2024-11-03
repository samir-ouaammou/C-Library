/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:14:22 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/03 16:47:40 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(short nbr)
{
	if (nbr == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long	res;
	size_t			i;
	short			sgn;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	sgn = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	res = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		if (res > (9223372036854775807 - (str[i] - '0')) / 10)
			return (ft_check(sgn));
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sgn));
}
