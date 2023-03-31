/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:34 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/31 19:31:44 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmedstr;
	size_t	i;
	size_t	j;

	if (!s || !set)
		return (0);
	i = 0;
	j = ft_strlen(s);
	while (s[i] && ft_strchr(set, s[i]))
		i ++;
	while (j > i && ft_strchr(set, s[j]))
		j --;
	trimmedstr = (char *)malloc((j - i) + 1);
	if (!trimmedstr)
		return (0);
	trimmedstr = ft_substr(s, i, j - i + 1);
	return (trimmedstr);
}
