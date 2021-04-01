/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jballest <jballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:36:27 by jballest          #+#    #+#             */
/*   Updated: 2021/04/01 14:43:39 by jballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (lst || del)
	{
		first = ft_lstnew(f(lst->content));
		if (!first)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (!new)
				return (NULL);
			ft_lstadd_back(&first, new);
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
