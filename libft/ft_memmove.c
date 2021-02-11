/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:54:50 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:12:57 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (psrc < pdst)
	{
		i = 1;
		while (i <= len)
		{
			pdst[len - i] = psrc[len - i];
			i++;
		}
	}
	if (psrc > pdst)
	{
		i = 0;
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
