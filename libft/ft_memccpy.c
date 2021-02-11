/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:26:12 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:11:46 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;
	unsigned char		ch;
	size_t				i;

	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		pdst[i] = psrc[i];
		if (pdst[i] == ch)
			return ((void *)&pdst[i + 1]);
		i++;
	}
	return (NULL);
}
