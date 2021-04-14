#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	substr = NULL;
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(substr = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (s_len - start < len)
		len = s_len - start;
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
