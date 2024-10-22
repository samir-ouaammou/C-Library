#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len > 0)
	{
		*ptr++ = 0;
		len--;
	}
}
