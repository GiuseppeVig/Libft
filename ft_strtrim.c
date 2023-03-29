/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:34 by gvigilan          #+#    #+#             */
/*   Updated: 2023/03/29 17:37:00 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numofchars(char const *str, char const *c)
{
	size_t	i;
	int		chars;
	size_t	j;
	int		found;

	i = 0;
	chars = 0;
	while (str[i])
	{
		j = 0;
		while (c[j])
		{
			if (str[i] == c[j])
			{
				found = 1;
				break ;
			}
			j ++;
		}
		if (!found)
			chars ++;
		i ++;
	}
	return (chars);
}

static int	charinstr(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmedstr;
	size_t	i;
	size_t	j;

	trimmedstr = (char *)malloc(numofchars(s, set));
	if (!trimmedstr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!charinstr(s[i], (char *)set))
		{
			trimmedstr[j] = s[i];
			j ++;
		}
		i ++;
	}
	return (trimmedstr);
}
