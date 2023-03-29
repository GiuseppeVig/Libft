/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:25:57 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/27 19:02:14 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*duplicate;
	size_t	i;

	duplicate = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i ++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
