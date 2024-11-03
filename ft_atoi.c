/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:14:22 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/03 20:34:53 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	size_t			i;
	int				sgn;

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
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if (res > 9223372036854775807 && sgn == 1)
			return (-1);
		if (res > 9223372036854775807 && sgn == -1)
			return (0);
		i++;
	}
	return (res * sgn);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("9223372036854775807"));
	printf("%d\n\n", atoi("9223372036854775807"));
	
	printf("%d\n", ft_atoi("-9223372036854775807"));
	printf("%d\n\n", atoi("-9223372036854775807"));
	
	printf("%d\n", ft_atoi("9223372036854775808"));
	printf("%d\n\n", atoi("9223372036854775808"));
	
	printf("%d\n", ft_atoi("-9223372036854775808"));
	printf("%d\n\n", atoi("-9223372036854775808"));
	
	printf("%d\n", ft_atoi("9223372036854775809"));
	printf("%d\n\n", atoi("9223372036854775809"));
	
	printf("%d\n", ft_atoi("-9223372036854775809"));
	printf("%d\n\n", atoi("-9223372036854775809"));
	
	printf("%d\n", ft_atoi("19223372036854775807"));
	printf("%d\n\n", atoi("19223372036854775807"));
	
	printf("%d\n", ft_atoi("-19223372036854775807"));
	printf("%d\n\n", atoi("-19223372036854775807"));
	
}