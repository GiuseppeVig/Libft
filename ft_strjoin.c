/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:15:33 by gvigilan          #+#    #+#             */
/*   Updated: 2023/04/02 13:11:24 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;

	joinedstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joinedstr)
		return (0);
	ft_strlcpy(joinedstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(joinedstr, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (joinedstr);
}
