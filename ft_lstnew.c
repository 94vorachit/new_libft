/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 02:57:55 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/25 03:27:42 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	rtn = (t_list *)malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	rtn->next = NULL;
	rtn->content = content;
	return (rtn);
}

// int	main(void)
// {
// 	char	*text;
// 	t_list	*node1;

// 	text = "Hello from ft_lstnew";
// 	node1 = ft_lstnew(text);
// 	if (!node1)
// 	{
// 		printf("malloc failed: node is NULL\n");
// 		return (1);
// 	}
// 	printf("node address   : %p\n", (void *)node1);
// 	printf("node->content  : %p\n", node1->content);
// 	printf("as string      : %s\n", (char *)node1->content);
// 	printf("node->next     : %p (should be NULL)\n", (void *)node1->next);
// 	free(node1);

// 	int	value;
// 	t_list	*node2;

// 	value = 42;
// 	node2 = ft_lstnew(&value);
// 	if (!node2)
// 	{
// 		printf("malloc failed: node is NULL\n");
// 		return (1);
// 	}
// 	printf("node address   : %p\n", (void *)node2);
// 	printf("node->content  : %p\n", node2->content);
// 	printf("as int         : %d\n", *(int *)node2->content);
// 	printf("node->next     : %p (should be NULL)\n", (void *)node2->next);
// 	free(node2);
// 	return (0);
// }