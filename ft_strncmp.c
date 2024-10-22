/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:17:36 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/22 14:35:46 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while ((s1[i]) && (i < len) && (s1[i] == s2[i]))
		i++;
	if (i == len)
		return (0);
	return (s1[i] - s2[i]);
}
//   s1 => string 1
//   s2 => string 2
//   i  => index
