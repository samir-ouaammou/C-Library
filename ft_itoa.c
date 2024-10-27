/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:04:28 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/27 22:52:00 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countlen(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_part1(void)
{
	char *res;

	res = (char *)ft_calloc(2, sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	if (n == 0)
		return (ft_part1());
	len = ft_countlen(n);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == -2147483648)
		return (res = "-2147483648");
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		len--;
		res[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
