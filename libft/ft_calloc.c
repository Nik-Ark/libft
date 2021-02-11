/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:36:47 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:05:58 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	nbytes;
	void			*addr;

	addr = NULL;
	nbytes = count * size;
	addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
