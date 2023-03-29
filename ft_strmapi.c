/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:55:23 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/28 17:38:52 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	newstr = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		newstr[i] = (f)(i, s[i]);
		i ++;
	}
	newstr[i] = '\0';
	return (newstr);
}
