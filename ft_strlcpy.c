#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;

	if (!src)
		return (0);
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	i = 0;
	while ((src[i]) && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}
//   i => index
//   s_len => src_len
