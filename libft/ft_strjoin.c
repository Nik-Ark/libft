#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1_len;
	unsigned int	s2_len;

	if (!s1 || !s2)
		return (NULL);
	new_s = NULL;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = -1;
	j = -1;
	if (!(new_s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	while (++i < s1_len)
		new_s[i] = s1[i];
	while (++j < s2_len)
		new_s[i + j] = s2[j];
	new_s[i + j] = '\0';
	return (new_s);
}
