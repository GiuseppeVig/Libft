/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:24:33 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/29 18:06:58 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;

	i = 0;
	if (!(*lst)->content)
	{
		(*lst) = new;
		return ;
	}
	while (!(*lst)->next)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
}
