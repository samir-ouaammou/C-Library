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
