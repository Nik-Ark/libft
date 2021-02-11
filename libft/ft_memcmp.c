/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:09:01 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:12:20 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;
	size_t				i;

	pstr1 = (const unsigned char *)str1;
	pstr2 = (const unsigned char *)str2;
	i = 0;
	while (i < len)
	{
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
	}
	return (0);
}
