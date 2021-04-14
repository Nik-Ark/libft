#include "libft.h"

static	int		fillcrd(int **crd, unsigned int n, char const *s, char const c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (s[j] == c)
			j++;
		crd[i][0] = j;
		while (s[j] && s[j] != c)
			j++;
		crd[i][1] = j;
		i++;
	}
	return (1);
}

static	char	**fillbig_s(int **crd, unsigned int n, char const *s)
{
	char			**big_s;
	unsigned int	i;
	unsigned int	j;

	big_s = NULL;
	i = 0;
	j = 0;
	if (!(big_s = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		if (!(big_s[i] = ft_substr(s, crd[i][0], crd[i][1] - crd[i][0])))
		{
			while (j < i)
				free(big_s[j++]);
			free(big_s);
			return (NULL);
		}
		i++;
	}
	big_s[i] = NULL;
	return (big_s);
}

char			**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;
	int				**coord;
	char			**big_s;

	if (!s)
		return (NULL);
	i = 0;
	coord = NULL;
	big_s = NULL;
	words = ft_cntwrds(s, c);
	if (!(coord = ft_getmtrx(words, 2)))
		return (NULL);
	if (!(fillcrd(coord, words, s, c)))
	{
		ft_freemtrx(coord, words);
		return (NULL);
	}
	if (!(big_s = fillbig_s(coord, words, s)))
	{
		ft_freemtrx(coord, words);
		return (NULL);
	}
	ft_freemtrx(coord, words);
	return (big_s);
}
