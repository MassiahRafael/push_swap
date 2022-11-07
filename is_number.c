/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:23:05 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:23:12 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *num)
{
	int	count;

	count = 0;
	if ((num[count] == '-' || num[count] == '+') && ft_isdigit(num[count + 1]))
		count++;
	while (num[count] && ft_isdigit(num[count]))
		count++;
	if (num[count] != '\0' && !ft_isdigit(num[count]))
		return (0);
	return (1);
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
