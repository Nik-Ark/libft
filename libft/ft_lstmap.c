/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:14:01 by lessie            #+#    #+#             */
/*   Updated: 2020/11/08 14:10:52 by lessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	if (!(head = ft_lstnew(f(lst->content))))
		return (NULL);
	curr = head;
	lst = lst->next;
	while (lst)
	{
		if (!(next = ft_lstnew(f(lst->content))))
		{
			if (!del)
				return (NULL);
			ft_lstclear(&head, del);
			return (NULL);
		}
		curr->next = next;
		curr = next;
		lst = lst->next;
	}
	return (head);
}
