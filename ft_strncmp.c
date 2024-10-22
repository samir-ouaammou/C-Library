#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while ((s1[i]) && (i < len) && (s1[i] == s2[i]))
		i++;
	if (i == len)
		return (0);
	return (s1[i] - s2[i]);
}
//   s1 => string 1
//   s2 => string 2
//   i  => index
