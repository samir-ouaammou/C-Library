/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:01:20 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:06 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char	*ft_strchr(char *str, int c)
{
	size_t	i;

	if (!str)
		return (NULL);
	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (0 == c)
		return (&str[i]);
	return (NULL);
}
