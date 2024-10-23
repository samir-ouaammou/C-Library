/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:08:25 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:03 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	h;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(ft_word_count(s, c) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	h = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			res[h] = ft_substr(s, j, i - j);
			h++;
		}
	}
	res[h] = NULL;
	return (res);
}
