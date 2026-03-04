/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 00:16:17 by vorhansa          #+#    #+#             */
/*   Updated: 2026/03/04 02:23:01 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !del || !lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
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
// 	t_list	*node;
	
// 	while (head)
// 	{
// 		node = head->next;
// 		free(head);
// 		head = node;
// 	}
// }

// static void	del_no_free(void *content)
// {
// 	printf("del called for value=%d (content not heap-allocated)\n",
// 		*(int *)content);
// }

// int	main(void)
// {
// 	t_list	*l;
// 	t_list	*node;
// 	int	a;
// 	int	i;

// 	i = 0;
// 	a = 1;
// 	l = NULL;
// 	printf("---------- Make List ----------\n");
// 	while (i++ < 10)
// 		ft_lstadd_front(&l, ft_lstnew(&a));
// 	printf("size = %d\n", ft_lstsize(l));
// 	print_list(l);
	
// 	printf("---------- ft_lstdelone ----------\n");
// 	node = l;
// 	l = l->next;
// 	ft_lstdelone(node, del_no_free);
// 	printf("size = %d\n", ft_lstsize(l));
// 	print_list(l);
	
// 	printf("---------- ft_lstclear ----------\n");
// 	ft_lstclear(&l, del_no_free);
// 	printf("size = %d\n", ft_lstsize(l));
// 	print_list(l);
	
// 	free_list(l);
// 	write(1, "\n", 1);
// 	return (0);
// }