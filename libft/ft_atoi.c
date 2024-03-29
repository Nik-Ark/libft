#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	long int		nbr;

	i = 0;
	if (!str[i])
		return (0);
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += (str[i] - '0');
		i++;
	}
	return ((int)(nbr * sign));
}
