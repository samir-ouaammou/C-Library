/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:16:10 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:27 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, const char *needle, size_t	len)
{
	size_t	i;
	size_t	j;

	if ((!haystack) || (!haystack && !needle))
		return (NULL);
	if (!needle)
		return (haystack);
	i = 0;
	while ((haystack[i]) && (i < len))
	{
		j = 0;
		while ((needle[j]) && (i + j < len) && (needle[j] == haystack[i + j]))
			j++;
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
//   i => index 1
//   j => index 2
