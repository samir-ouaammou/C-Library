/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:35:04 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/30 09:46:33 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	void	*res;

	if ((len) && (count > (__SIZE_MAX__ / len)))
		return (NULL);
	res = malloc(count * len);
	if (!res)
		return (NULL);
	ft_bzero(res, (count * len));
	return (res);
}
