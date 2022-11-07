/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:23:32 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:23:37 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **stack, int size)
{
	t_node	*temp;
	int		len;

	len = 0;
	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->value < temp->next->value)
			len++;
		temp = temp->next;
	}
	if ((size - 1) - len == 0)
		return (1);
	else
		return (0);
}
