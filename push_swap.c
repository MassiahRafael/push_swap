/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:24:30 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:24:36 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(t_node **list_a, int size)
{
	t_node	*list_b;

	list_b = NULL;
	if (size == 2)
	{
		if (!is_sorted(list_a, size))
			sa(list_a);
		return (0);
	}
	else if (size == 3)
	{
		if (!is_sorted(list_a, size))
			sort_three(list_a);
		return (0);
	}
	else if (size > 3 && size < 6)
		sort_five(list_a, &list_b, size);
	else if (size > 5)
		radix_sort(list_a, list_b, size);
	return (0);
}
