#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;
	size_t				i;

	if (!dst && !src)
		return (dst);
	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
