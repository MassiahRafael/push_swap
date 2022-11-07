/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:10:48 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:29:16 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# define INT_MIN -2147483648
# define INT_MAX 2147483647

struct	s_node
{
	int				value;
	int				index;
	struct s_node	*next;
};

typedef struct s_node	t_node;
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(const char *s, char c);
size_t			ft_strlen(const char *str);
long int		ft_atoi(const char *str);
void			swap(t_node **root);
void			print_root(t_node *root);
int				get_index(char **argv, int num);
int				ft_isdigit(int c);
int				is_number(char *num);
int				check_nbrdup(char **argv);
void			free_list(t_node **root);
int				list_size(t_node **stack);
int				is_sorted(t_node **stack, int size);
int				numb_strcmp(const char *s1, const char *s2);
void			check_zero(char **argv);
void			ft_insert_end(t_node **root, int number, int index);
int				check_int(char **argv);
int				check_input(char **argv);
int				push_swap(t_node **list_a, int size);
void			sort_three(t_node **list_a);
void			sort_five(t_node **list_a, t_node **list_b, int size);
void			free_matrix(char **matrix);
void			radix_sort(t_node **list_a, t_node *list_b, int size);
void			exit_error(t_node **stack_a);
void			pa(t_node **root, t_node **root_b);
void			pb(t_node **root, t_node **root_b);
void			ra(t_node **root);
void			rb(t_node **root_b);
void			rr(t_node **root, t_node **root_b);
int				get_bits(t_node **list_a, int size);
void			sa(t_node **root);
void			sb(t_node **root_b);
void			rra(t_node **root);
int				check_string(const char *s1, const char *s2);
#endif
