/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:28:57 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/25 11:37:31 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
	size_t  size;
	size_t  s_len;
	char    *res;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if (s_len < len)
		size = s_len - start;
	else
		size = len;
	res = (char *)ft_calloc(sizeof(char), size + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && i < size)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
