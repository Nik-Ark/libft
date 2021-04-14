#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	const unsigned char	*pstr;
	unsigned char		ch;
	size_t				i;

	pstr = (const unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (pstr[i] == ch)
			return ((void *)&pstr[i]);
		i++;
	}
	return (NULL);
}
