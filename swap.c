/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:27:14 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:27:19 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **root)
{
	t_node	*temp;

	temp = *root;
	*root = (*root)->next;
	temp->next = (*root)->next;
	(*root)->next = temp;
}

void	sa(t_node **root)
{
	swap(root);
	write(1, "sa\n", 3);
}

void	sb(t_node **root_b)
{
	swap(root_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **root, t_node **root_b)
{
	swap(root);
	swap(root_b);
	write(1, "ss\n", 3);
}
