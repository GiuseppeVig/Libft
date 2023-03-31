/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:34 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/31 16:45:30 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_strstart(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = ft_strlen(s2) - 1;
	start = 0;
	while (s1[i] == s2[j])
	{
		start ++;
		i ++;
		j --;
	}
	return (start);
}

static unsigned int	ft_strfinish(char const *str, char const *st)
{
	size_t	i;
	size_t	j;
	int		finish;

	i = ft_strlen(str) - 1;
	j = 0;
	finish = ft_strlen(str);
	while (str[i] == st[j])
	{
		finish --;
		i --;
		j ++;
	}
	return (finish);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmedstr;
	size_t	i;
	size_t	j;

	i = ft_strstart(s, set);
	j = ft_strfinish(s, set);
	trimmedstr = ft_substr(s, i, j - i);
	if (!trimmedstr)
		return (0);
	return (trimmedstr);
}
