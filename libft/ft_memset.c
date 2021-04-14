#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	ch = (unsigned char)c;
	p = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		p[i] = ch;
		i++;
	}
	return (src);
}
