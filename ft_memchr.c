/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:44:26 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/22 15:09:51 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t				i;
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (i < len)
	{
		if (temp[i] == c)
			return (((void *)&temp[i]));
	}
	return (NULL);
}
