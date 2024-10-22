#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sgn;
	int		res;

	i++;
	sgn = 1;
	while ((str[i]) && (str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	res = 0;
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sgn);
}
