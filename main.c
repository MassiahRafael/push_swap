/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:02:45 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:32:14 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	populate(char **argv, int i, t_node *list_a)
{
	if (check_input(argv))
	{
		exit_error(&list_a);
		return (0);
	}
	while (argv[i])
	{
		ft_insert_end(&list_a, ft_atoi(argv[i]),
			get_index(argv, ft_atoi(argv[i])));
		i++;
	}
	if (is_sorted(&list_a, list_size(&list_a)))
	{
		free_list(&list_a);
		free_matrix(argv);
		return (0);
	}
	else
		push_swap(&list_a, list_size(&list_a));
	free_list(&list_a);
	free_matrix(argv);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*new_argv;
	char	*temp;
	int		i;

	if (argc < 2)
		return (0);
	else
	{
		i = 2;
		new_argv = ft_strjoin(argv[1], "");
		while (i < argc)
		{
			temp = new_argv;
			new_argv = ft_strjoin(new_argv, " ");
			free(temp);
			temp = new_argv;
			new_argv = ft_strjoin(new_argv, argv[i]);
			free(temp);
			i++;
		}
		argv = ft_split(new_argv, ' ');
		free(new_argv);
		populate(argv, 0, NULL);
	}
	return (0);
}
