/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nbrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:10:25 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:11:38 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nbrdup(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (j != i && numb_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_string(const char *s1, const char *s2)
{
	int	s1_index;

	s1_index = 0;
	if (s1[s1_index] == '+')
	{
		if (s2[0] != '+')
			s1_index++ ;
	}
	if (s1[s1_index == '0'])
	{
		while (s1[s1_index] == '0')
			s1_index++ ;
	}
	return (s1_index);
}

int	numb_strcmp(const char *s1, const char *s2)
{
	int	s1_index;
	int	s2_index;

	s1_index = check_string(s1, s2);
	s2_index = check_string(s2, s1);
	while (s1[s1_index] != '\0' && s2[s2_index] != '\0'
		&& s1[s1_index] == s2[s2_index])
	{
		s1_index++;
		s2_index++;
	}
	return ((unsigned char)s1[s1_index] - (unsigned char)s2[s2_index]);
}
