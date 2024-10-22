#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t				i;
	const unsigned char	*s_1;
	const unsigned char	*s_2;

	i = 0;
	s_1 = (const unsigned char *) s1;
	s_2 = (const unsigned char *) s2;
	while ((i < len) && (s_1[i] == s_2[i]))
		i++;
	return (s_1[i] - s_2[i]);
}
