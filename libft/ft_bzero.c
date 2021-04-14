#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}
