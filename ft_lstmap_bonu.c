/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:16:30 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/28 10:05:27 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	void	*value;

	list = NULL;
	while (lst && f && del)
	{
		value = f(lst->content);
		new = ft_lstnew(value);
		if (!new)
		{
			del(value);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
