/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:49:09 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/26 18:57:49 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free (s);
	return (NULL);
}

static int	ft_row_count(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	char	*start;
	int		i;
	
	dst = (char **)malloc(sizeof(char *) * (ft_row_count(s,c) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while(*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s)
				s++;
			dst[i] = ft_substr(start, 0, s - start);
			if (!dst[i])
				return (ft_free(dst));
			i++;
		}
		else
			s++;
	}
	dst[i] = '\0';
	return (dst);
}
