/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:53:10 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/22 14:30:03 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_st;
	unsigned char	*s_rc;

	if (dst < src)
		return (ft_memcopy (dst, src, len));
	if (dst >= src)
	{
		d_st = (unsigned char *) dst;
		s_rc = (const unsigned char *) src;
		while (len > 0)
		{
			len--;
			d_st[len] = s_rc[len];
		}
	}
	return (dst);
}
