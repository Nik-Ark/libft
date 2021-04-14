#include "libft.h"

int		**ft_getmtrx(unsigned int len, unsigned int width)
{
	int				**matrix;
	unsigned int	i;

	matrix = NULL;
	i = 0;
	if (!(matrix = (int**)malloc(sizeof(int*) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		if (!(matrix[i] = (int*)malloc(sizeof(int) * width)))
			return (ft_freemtrx(matrix, i));
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
