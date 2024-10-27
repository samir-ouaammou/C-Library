/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:14:22 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/27 17:55:01 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	unsigned long	temp;
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
		temp = res * 10 + (str[i] - '0');
		if (temp >= 9223372036854775807)
		{
			if (sgn == -1)
				return (0);
			return (-1);
		}
		res = temp;
		i++;
	}
	return ((int)(res * sgn));
}