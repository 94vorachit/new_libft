/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:57:57 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/26 21:28:20 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	
	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static char	to_upper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*src;
// 	char	*out;

// 	src = "abcdef";
// 	out = ft_strmapi(src, to_upper_even);
// 	if (!out)
// 	{
// 		printf("malloc failed\n");
// 		return (1);
// 	}
// 	printf("input : %s\n", src);
// 	printf("output: %s\n", out);
// 	if (ft_strncmp(out, "AbCdEf", 7) == 0)
// 		printf("test: OK\n");
// 	else
// 		printf("test: KO\n");
// 	free(out);
// 	return (0);
// }
