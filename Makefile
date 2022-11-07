SRCS	=	aux_libft.c\
			check_input.c\
			check_int.c\
			check_nbrdup.c\
			check_zero.c\
			exit_error.c\
			free_list.c\
			free_matrix.c\
			ft_strlen.c\
			is_number.c\
			is_sorted.c\
			push.c\
			push_swap.c\
			radix_sort.c\
			reverse_rotate.c\
			rotate.c\
			sort_five.c\
			sort_three.c\
			stack.c\
			swap.c\

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

NAME	=	push_swap

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) main.c -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
