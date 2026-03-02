/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 04:18:18 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/27 04:48:09 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void	print_list(t_list *head)
// {
// 	int	i;

// 	i = 0;
// 	while (head)
// 	{
// 		printf("node[%d] addr=%p content=%d next=%p\n", i,
// 			(void *)head, *(int *)head->content, (void *)head->next);
// 		head = head->next;
// 		i++;
// 	}
// }

// static void	free_list(t_list *head)
// {
// 	t_list	*next;

// 	while (head)
// 	{
// 		next = head->next;
// 		free(head);
// 		head = next;
// 	}
// }

// static void	del_no_free(void *content)
// {
// 	printf("del called for value=%d (content not heap-allocated)\n",
// 		*(int *)content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node;
// 	int		a;
// 	int		b;
// 	int		c;
	
// 	head = NULL;
// 	a = 10;
// 	b = 20;
// 	c = 30;
// 	printf("size(empty) = %d\n", ft_lstsize(head));
// 	print_list(head);
// 	node = ft_lstnew(&a);
// 	if (!node)
// 		return (1);
// 	ft_lstadd_front(&head, node);
// 	printf("size(1 node) = %d\n", ft_lstsize(head));
// 	print_list(head);
// 	node = ft_lstnew(&b);
// 	if (!node)
// 		return (free_list(head), 1);
// 	ft_lstadd_front(&head, node);
// 	node = ft_lstnew(&c);
// 	if (!node)
// 		return (free_list(head), 1);
// 	ft_lstadd_front(&head, node);
// 	printf("size(3 nodes) = %d\n", ft_lstsize(head));
// 	print_list(head);
// 	printf("delete head with ft_lstdelone\n");
// 	node = head;
// 	head = head->next;
// 	ft_lstdelone(node, del_no_free);
// 	printf("size(after delete) = %d\n", ft_lstsize(head));
// 	print_list(head);
// 	printf("lstlast\n");
// 	print_list(ft_lstlast(head));
// 	free_list(head);
// 	return (0);
// }