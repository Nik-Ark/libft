#include "libft.h"

int		ft_cntwrds(char const *str, char const delim)
{
	unsigned int	i;
	unsigned int	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == delim)
			i++;
		if (str[i] != delim && str[i])
			count++;
		while (str[i] != delim && str[i])
			i++;
	}
	return (count);
}
