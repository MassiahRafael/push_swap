/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:06 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:26:09 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **root)
{
	t_node	*temp;
	t_node	*contador;

	contador = *root;
	while (contador->next != NULL)
		contador = contador->next;
	temp = *root;
	*root = (*root)->next;
	temp->next = NULL;
	contador->next = temp;
}

void	ra(t_node **root)
{
	rotate(root);
	write(1, "ra\n", 3);
}

void	rb(t_node **root_b)
{
	rotate(root_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **root, t_node **root_b)
{
	rotate(root);
	rotate(root_b);
	write(1, "rr\n", 3);
}
