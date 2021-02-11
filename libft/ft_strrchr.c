/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:35:17 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:17:12 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	int		i;
	char	*ret;

	ch = (char)c;
	i = 0;
	ret = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			ret = (char *)&str[i];
		i++;
	}
	if (str[i] == ch)
		ret = (char *)&str[i];
	return (ret);
}
