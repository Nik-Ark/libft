#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char			*s_trim;

	if (!s1 || !set)
		return (NULL);
	s_trim = NULL;
	if (!s1[0])
	{
		if (!(s_trim = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		s_trim[0] = '\0';
		return (s_trim);
	}
	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (i <= len && ft_charinset(s1[i], set))
		i++;
	while (len > i && ft_charinset(s1[len], set))
		len--;
	s_trim = ft_substr(s1, i, (len - i + 1));
	return (s_trim);
}
