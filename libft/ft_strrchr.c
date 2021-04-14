#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	int		i;
	char	*ret;

	ch = (char)c;
	i = 0;
	ret = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			ret = (char *)&str[i];
		i++;
	}
	if (str[i] == ch)
		ret = (char *)&str[i];
	return (ret);
}
