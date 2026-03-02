/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:02:37 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/26 03:39:37 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

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
// 	free_list(head);
// 	return (0);
// }
