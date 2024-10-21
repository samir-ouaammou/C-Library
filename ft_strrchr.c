#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	c = (unsigned char)c;
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
//   i => index
