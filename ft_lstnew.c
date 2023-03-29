/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:35:36 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/27 18:18:51 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	newnode->content = content;
	newnode->next = 0;
	return (newnode);
}
