/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:21:41 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:21:45 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(t_node **stack_a)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_list(stack_a);
	write(2, "Error\n", 6);
	exit (1);
}
