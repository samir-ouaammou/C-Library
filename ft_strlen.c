#include <libc.h>

size_t	ft_strlen(const char *str)
{
	size_t	l; // length

	l = 0;
	while (str[l])
		l++;
	return (l);
}
