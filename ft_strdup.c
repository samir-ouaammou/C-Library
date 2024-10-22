/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:11:05 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/22 14:33:01 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	s_len;
	char	*res;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	res = (char *)malloc((s_len + 1) * sizeof(char));
	if (!res)
		return (res);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
//   str   => string
//   s_len => string len
//   res   => result
//   i     => index
