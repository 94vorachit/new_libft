/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 03:59:04 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/27 04:13:29 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// static void	iter_add_index(unsigned int i, char *c)
// {
// 	*c += i;
// }

// int	main(void)
// {
// 	char	s0[] = "";
// 	char	s1[] = "0";
// 	char	s2[] = "0000000000";

// 	ft_striteri(s0, iter_add_index);
// 	ft_striteri(s1, iter_add_index);
// 	ft_striteri(s2, iter_add_index);
// 	printf("s0: %s\n", s0);
// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	if (ft_strncmp(s0, "", 1) == 0
// 		&& ft_strncmp(s1, "0", 2) == 0
// 		&& ft_strncmp(s2, "0123456789", 11) == 0)
// 		printf("test: OK\n");
// 	else
// 		printf("test: KO\n");
// 	return (0);
// }
