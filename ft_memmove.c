/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:53:10 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:46:56 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d_st;
	const unsigned char	*s_rc;

	d_st = (unsigned char *)dst;
	s_rc = (const unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else if (dst > src)
	{
		while (len--)
			d_st[len] = s_rc[len];
	}
	return (dst);
}
