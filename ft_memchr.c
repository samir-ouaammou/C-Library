/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:44:26 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:46:41 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t				i;
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (temp[i] == c)
			return (((void *)&temp[i]));
		i++;
	}
	return (NULL);
}
