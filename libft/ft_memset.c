/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:11:58 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:13:16 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	ch = (unsigned char)c;
	p = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		p[i] = ch;
		i++;
	}
	return (src);
}
