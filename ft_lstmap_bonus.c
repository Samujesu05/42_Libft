/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:03:56 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/29 18:52:53 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;

	newlst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(0);
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		new->content = (f(lst->content));
		ft_lstadd_back(&newlst, new);
		lst = lst->next;
	}
	return (newlst);
}
