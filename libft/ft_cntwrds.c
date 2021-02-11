/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwrds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:54:57 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:06:33 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntwrds(char const *str, char const delim)
{
	unsigned int	i;
	unsigned int	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == delim)
			i++;
		if (str[i] != delim && str[i])
			count++;
		while (str[i] != delim && str[i])
			i++;
	}
	return (count);
}
