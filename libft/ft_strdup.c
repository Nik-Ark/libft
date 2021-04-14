#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*str;
	unsigned int	i;

	str = NULL;
	i = ft_strlen(src);
	str = malloc((i + 1) * sizeof(char));
	if (str)
		ft_strlcpy(str, src, i + 1);
	return (str);
}
