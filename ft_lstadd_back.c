/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 03:00:35 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/26 04:17:18 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst || new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last = *lst;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
	}
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
// 	if (i == 0)
// 		printf("(empty list)\n");
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
// 	printf("== Start ==\n");
// 	print_list(head);

// 	node = ft_lstnew(&a);
// 	if (!node)
// 		return (1);
// 	ft_lstadd_back(&head, node);
// 	printf("\n== After adding 10 ==\n");
// 	print_list(head);

// 	node = ft_lstnew(&b);
// 	if (!node)
// 		return (free_list(head), 1);
// 	ft_lstadd_back(&head, node);
// 	printf("\n== After adding 20 ==\n");
// 	print_list(head);

// 	node = ft_lstnew(&c);
// 	if (!node)
// 		return (free_list(head), 1);
// 	ft_lstadd_back(&head, node);
// 	printf("\n== After adding 30 ==\n");
// 	print_list(head);

// 	free_list(head);
// 	return (0);
// }
