#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memchr(s, 0, len);
}
