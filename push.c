/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:24:05 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:24:11 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **giver, t_node **receiver)
{
	t_node	*temp;

	temp = *giver;
	*giver = (*giver)->next;
	temp->next = *receiver;
	*receiver = temp;
}

void	pa(t_node **root, t_node **root_b)
{
	push(root_b, root);
	write(1, "pa\n", 3);
}

void	pb(t_node **root, t_node **root_b)
{
	push(root, root_b);
	write(1, "pb\n", 3);
}
