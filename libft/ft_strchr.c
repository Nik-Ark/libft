/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:06:12 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:14:57 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	if (str[i] == ch)
		return ((char *)&str[i]);
	else
		return (NULL);
}
