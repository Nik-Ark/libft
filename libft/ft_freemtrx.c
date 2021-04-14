#include "libft.h"

int		**ft_freemtrx(int **matrix, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}
