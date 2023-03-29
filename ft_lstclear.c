/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:36:15 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/29 18:08:35 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	i;

	i = 0;
	while (!((*lst)->next))
	{
		ft_lstdelone((*lst), del);
		(*lst) = (*lst)->next;
	}
	ft_lstdelone((*lst), del);
}
