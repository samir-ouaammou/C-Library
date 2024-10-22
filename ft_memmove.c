#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_st;
	char	*s_rc;

	if (dst < src)
		return (ft_memcopy (dst, src, len));
	if (dst >= src)
	{
		d_st = (char *) dst;
		s_rc = (const char *) src;
		while (len > 0)
		{
			len--;
			d_st[len] = s_rc[len];
		}
	}
	return (dst);
}
