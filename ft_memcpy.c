#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char	*s_rc;
	unsigned char		*d_st;
	size_t				i;

	d_st = (unsigned char *) dst;
	s_rc = (const unsigned char *) src;
	i = 0;
	while (i < len)
	{
		d_st[i] = s_rc[i];
		i++;
	}
	return (dst);
}
