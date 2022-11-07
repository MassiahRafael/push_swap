/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:25:48 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:25:52 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **root)
{
	t_node	*last;
	t_node	*current;

	current = *root;
	while (current->next->next != NULL)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *root;
	*root = last;
}

void	rra(t_node **root)
{
	reverse_rotate(root);
	write(1, "rra\n", 4);
}

void	rrb(t_node **root_b)
{
	reverse_rotate(root_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **root, t_node **root_b)
{
	reverse_rotate(root);
	reverse_rotate(root_b);
	write(1, "rrr\n", 4);
}
