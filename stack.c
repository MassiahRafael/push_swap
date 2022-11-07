/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:27:00 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:27:04 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_end(t_node **root, int number, int index)
{
	t_node	*new_node;
	t_node	*curr;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit (1);
	new_node -> next = NULL;
	new_node -> index = index;
	new_node -> value = number;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr -> next != NULL)
		curr = curr -> next;
	curr -> next = new_node;
}

void	print_root(t_node *root)
{
	t_node	*curr;

	curr = root;
	while (curr->next != NULL)
		curr = curr->next;
}

int	get_index(char **argv, int num)
{
	int	index;
	int	res;

	index = 0;
	res = 0;
	while (argv[index])
	{
		if (ft_atoi(argv[index]) < num)
			res++;
		index++;
	}
	return (res);
}

int	list_size(t_node **stack)
{
	int		size;
	t_node	*temp;

	size = 0;
	temp = *stack;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
