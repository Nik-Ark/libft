/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:56:37 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:15:11 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*str;
	unsigned int	i;

	str = NULL;
	i = ft_strlen(src);
	str = malloc((i + 1) * sizeof(char));
	if (str)
		ft_strlcpy(str, src, i + 1);
	return (str);
}
