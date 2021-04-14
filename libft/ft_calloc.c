#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	nbytes;
	void			*addr;

	addr = NULL;
	nbytes = count * size;
	addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
