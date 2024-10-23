/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:11:12 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:17 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;

	if (!src)
		return (0);
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	i = 0;
	while ((src[i]) && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}
//   i => index
//	 s_len => src_len
