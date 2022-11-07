/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:44 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:26:47 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **list_a)
{
	if ((*list_a)->index > (*list_a)->next->index
		&& (*list_a)->index < (*list_a)->next->next->index)
		sa(list_a);
	else if ((*list_a)->index > (*list_a)->next->index
		&& (*list_a)->next->index > (*list_a)->next->next->index)
	{
		sa(list_a);
		rra(list_a);
	}
	else if ((*list_a)->index > (*list_a)->next->index
		&& (*list_a)->next->index < (*list_a)->next->next->index)
		ra(list_a);
	else if ((*list_a)->index < (*list_a)->next->index
		&& (*list_a)->index < (*list_a)->next->next->index)
	{
		sa(list_a);
		ra(list_a);
	}
	else if ((*list_a)->index < (*list_a)->next->index
		&& (*list_a)->index > (*list_a)->next->next->index)
		rra(list_a);
}
