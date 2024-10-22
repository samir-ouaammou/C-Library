#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (len > 0)
	{
		*ptr++ = c;
		len--;
	}
	return (s);
}
