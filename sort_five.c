/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:20 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:26:23 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **list_a, t_node **list_b, int size)
{
	int	c;

	c = -1;
	while (c++ < size)
	{
		if (is_sorted(list_a, size) && list_size(list_b) == 0)
			return ;
		if (size == 4 && (*list_a)->index == 0)
			pb(list_a, list_b);
		else if (size == 5 && ((*list_a)->index == 0 || (*list_a)->index == 1))
			pb(list_a, list_b);
		else
			ra(list_a);
	}
	if (!is_sorted(list_a, 3))
		sort_three(list_a);
	else if (is_sorted(list_b, size - 3))
		sb(list_b);
	while (size - 3)
	{
		pa(list_a, list_b);
		size--;
	}
}
