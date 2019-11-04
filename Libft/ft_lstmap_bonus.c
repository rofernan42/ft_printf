/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:58:34 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/15 14:13:09 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new_lst;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_lst);
}
