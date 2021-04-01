/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jballest <jballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:45:16 by jballest          #+#    #+#             */
/*   Updated: 2021/04/01 14:56:56 by jballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(lst));
	if (!lst)
		return (NULL);
	if (content == NULL)
		lst->content = NULL;
	else
		lst->content = (void *)content;
	lst->next = NULL;
	return (lst);
}
