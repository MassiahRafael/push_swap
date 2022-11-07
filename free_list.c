/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:22:03 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:22:21 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **root)
{
	t_node	*aux;

	aux = *root;
	while (*root)
	{
		aux = (*root)->next;
		free(*root);
		*root = aux;
	}
	*root = NULL;
}
