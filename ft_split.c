/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:59:52 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/02 09:42:03 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_word_count(char const *str, char c)
{
    int count = 0;
    size_t i = 0;

    while (str[i])
    {
        while (str[i] && str[i] == c)
            i++;
        if (str[i])
        {
            count++;
            while (str[i] && str[i] != c)
                i++;
        }
    }
    return (count);
}

static void ft_free(char **str, int count)
{
    while (count > 0)
    {
        free(str[count]);
        count--;
    }
    free(str);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int h;

    if (!s)
        return NULL;
    result = (char **)ft_calloc(sizeof(char *), (ft_word_count(s, c) + 1));
    if (!result)
        return NULL;

	i = 0;
	h = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
        {
            j = i;
            while (s[i] && s[i] != c)
                i++;
            result[h] = ft_substr(s, j, i - j);
            if (!result[h]) 
            {
                ft_free(result, h);
                return (NULL);
            }
            h++;
        }
    }
    result[h] = (NULL);
    return result;
}
