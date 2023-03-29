/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:40:48 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/29 18:11:46 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	size_t	i;

	i = 0;
	while (!lst->next)
	{
		(f)(lst->content);
		lst = lst->content;
	}
	(f)((lst + i)->content);
}
