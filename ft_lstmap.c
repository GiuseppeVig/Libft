/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:44:58 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/29 14:37:57 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	size_t	i;

	newlist = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	i = 0;
	if (!(lst->content))
		return (0);
	while (!(lst + i)->next)
	{
		(f)((lst + i)->content);
		ft_lstadd_back(&newlist, (lst + i));
		i ++;
	}
	ft_lstadd_back(&newlist, (lst + i));
	ft_lstclear(&lst, del);
	return (newlist);
}
