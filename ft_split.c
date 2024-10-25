/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:59:52 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/25 12:25:38 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free(char **str, size_t wc)
{
	while (wc > 0)
	{
		free(str[--wc]);
	}
	free(str);
	return (NULL);
}

static int	ft_word_count(const char *strs, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (strs[i])
	{
		while (strs[i] && strs[i] == c)
			i++;
		if (strs[i])
			count++;
		while (strs[i] && strs[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t h;
	char **res;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		res = (char **)ft_calloc(2, sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = ft_strdup(s1);
		res[1] = NULL;
		return (res);
	}
	res = (char **)ft_calloc(ft_word_count(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	h = 0;
	while (s[i])
	{
		while ((s[i]) && (s[i] == c))
			i++;
		if (s[i])
		{
			j = i;
			while ((s[i]) && (s[i] != c))
				i++;
			res[h] = ft_substr(s, j, i - 1);
			if (!res)
				return (ft_free(res, h));
			h++;
		}
	}
	res[h] = NULL;
	return (res);
}