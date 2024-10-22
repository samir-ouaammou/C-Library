#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	len;

	len = count * size;
	res = malloc(len);
	if (!res)
		return (NULL);
	ft_bzero(res, len);
	return (res);
}
//   res => result
//   len => length
