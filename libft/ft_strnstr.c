#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(needle[i]))
		return ((char *)stack);
	while (stack[i + j] != '\0' && i < len)
	{
		while (stack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&stack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
