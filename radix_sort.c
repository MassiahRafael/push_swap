/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:25:28 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:25:32 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a(t_node **list_a, t_node **list_b, int bit)
{
	if (((*list_a)->index & (1 << bit)) == 0)
		pb(list_a, list_b);
	else
		ra(list_a);
}

void	sort_b(t_node **list_a, t_node **list_b, int bit, int max_bits)
{
	if ((bit + 1) != max_bits)
	{
		if ((bit + 1) != max_bits
			&& ((*list_b)->index & (1 << (bit + 1) == 0)))
			rb(list_b);
		else
			pa(list_a, list_b);
	}
	else
		pa(list_a, list_b);
}

int	get_bits(t_node **list_a, int size)
{
	t_node	*temp;
	int		max_num;
	int		count;
	int		bits;

	max_num = 0;
	bits = 0;
	count = 0;
	temp = *list_a;
	while (count < size && temp->next != NULL)
	{
		if (temp->index > max_num)
		{
			max_num = temp->index;
		}
		temp = temp->next;
		count++;
	}
	while (max_num > 1)
	{
		max_num = max_num / 2;
		bits++;
	}
	bits++;
	return (bits);
}

void	radix_sort(t_node **list_a, t_node *list_b, int size)
{
	int	max_bits;
	int	bit;
	int	rounds;
	int	count;

	max_bits = get_bits(list_a, size);
	rounds = 0;
	bit = 0;
	while (bit < max_bits)
	{
		count = 0;
		size = list_size(list_a);
		while (count++ < size && size != 0)
			sort_a(list_a, &list_b, bit);
		count = list_size(&list_b);
		while (count > 0)
		{
			sort_b(list_a, &list_b, bit, max_bits);
			count--;
		}
		bit++;
		if (is_sorted(list_a, size) && list_b == NULL)
			break ;
	}
}
