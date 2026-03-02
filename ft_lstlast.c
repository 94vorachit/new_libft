/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:36:38 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/27 04:35:59 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
// 	printf("lstlast\n");
// 	print_list(ft_lstlast(head));
// 	free_list(head);
// 	return (0);
// }