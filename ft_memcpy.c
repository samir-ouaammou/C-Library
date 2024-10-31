/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:42:23 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/31 10:29:36 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d_cpy;
	const unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dst;
	s_cpy = (const unsigned char *)src;
	if (!s_cpy && !d_cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d_cpy[i] = s_cpy[i];
		i++;
	}
	return (dst);
}
