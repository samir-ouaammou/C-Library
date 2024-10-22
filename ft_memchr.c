#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t				i;
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (i < len)
	{
		if (temp[i] == c)
			return (((void *)&temp[i]));
	}
	return (NULL);
}
