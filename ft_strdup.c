#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	s_len;
	char	*res;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	res = (char *)malloc((s_len + 1) * sizeof(char));
	if (!res)
		return (res);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
//   str   => string
//   s_len => string len
//   res   => result
//   i     => index
