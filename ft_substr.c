/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:47 by gvigilan          #+#    #+#             */
/*   Updated: 2023/04/01 01:14:38 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i ++;
	}
	substr[i] = '\0';
	return (substr);
}
