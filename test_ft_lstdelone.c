#include "libft.h"
#include <stdio.h>

static void	del_int(void *content)
{
	printf("del called for value=%d\n", *(int *)content);
	free(content);
}

static t_list	*new_int_node(int value)
{
	int		*content;
	t_list	*node;

	content = (int *)malloc(sizeof(int));
	if (!content)
		return (NULL);
	*content = value;
	node = ft_lstnew(content);
	if (!node)
	{
		free(content);
		return (NULL);
	}
	return (node);
}

static void	print_list(t_list *head)
{
	int	i;

	i = 0;
	while (head)
	{
		printf("node[%d] addr=%p value=%d next=%p\n", i,
			(void *)head, *(int *)head->content, (void *)head->next);
		head = head->next;
		i++;
	}
	if (i == 0)
		printf("(empty list)\n");
}

static void	clear_list(t_list **head)
{
	t_list	*node;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		ft_lstdelone(node, del_int);
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node;
	t_list	*prev;
	t_list	*tail_prev;

	head = NULL;
	node = new_int_node(10);
	if (!node)
		return (1);
	ft_lstadd_back(&head, node);
	node = new_int_node(20);
	if (!node)
		return (clear_list(&head), 1);
	ft_lstadd_back(&head, node);
	node = new_int_node(30);
	if (!node)
		return (clear_list(&head), 1);
	ft_lstadd_back(&head, node);
	node = new_int_node(40);
	if (!node)
		return (clear_list(&head), 1);
	ft_lstadd_back(&head, node);

	printf("initial size = %d\n", ft_lstsize(head));
	print_list(head);

	printf("\nDelete middle node (value 20):\n");
	prev = head;
	node = head->next;
	prev->next = node->next;
	ft_lstdelone(node, del_int);
	printf("size = %d\n", ft_lstsize(head));
	print_list(head);

	printf("\nDelete head node:\n");
	node = head;
	head = head->next;
	ft_lstdelone(node, del_int);
	printf("size = %d\n", ft_lstsize(head));
	print_list(head);

	printf("\nDelete tail node:\n");
	tail_prev = head;
	while (tail_prev->next && tail_prev->next->next)
		tail_prev = tail_prev->next;
	node = tail_prev->next;
	tail_prev->next = NULL;
	ft_lstdelone(node, del_int);
	printf("size = %d\n", ft_lstsize(head));
	print_list(head);

	printf("\nCleanup remaining list with ft_lstdelone:\n");
	clear_list(&head);
	printf("final size = %d\n", ft_lstsize(head));
	print_list(head);
	return (0);
}
