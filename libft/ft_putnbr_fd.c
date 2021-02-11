/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:50:05 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:14:04 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_numlen(long int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static	void	ft_numchar(char *str, int len, long int nbr, int is_neg)
{
	int		i;

	i = 0;
	if (is_neg)
		str[i++] = '-';
	str[len] = '\0';
	while (--len >= i)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	char		str[12];
	int			is_neg;
	int			len;
	long int	nbr;

	if (fd < 0)
		return ;
	is_neg = 0;
	if (n < 0)
	{
		nbr = (long int)n * (-1);
		is_neg = 1;
	}
	else
		nbr = n;
	len = ft_numlen(nbr) + is_neg;
	ft_numchar(str, len, nbr, is_neg);
	ft_putstr_fd(str, fd);
}
