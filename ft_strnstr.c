/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:03:59 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/27 19:09:19 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	if (!*needle)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && needle[j] && (i + j) < len)
		{
			if (str[i + j] != needle[j])
				break ;
			j++;
		}
		if (!needle[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
