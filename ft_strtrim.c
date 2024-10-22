/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:06:21 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/22 20:06:22 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	temp;
	char	*res;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	temp = end - start;
	res = (char *)malloc((temp + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	return (ft_strncpy(res, (char *)&s1[start], temp));
}
