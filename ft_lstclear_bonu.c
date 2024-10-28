/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:38:51 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/28 10:05:14 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*help;

	if ((!lst) || (!del))
		return ;
	help = *lst;
	while (help)
	{
		temp = help;
		help = help->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
