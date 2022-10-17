#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
#include <stdlib.h>

struct s_node{
	int value;
	struct s_node* next;
};

typedef struct s_node t_node;

//prototipo da função de inserção no final da lista
void ft_insert_end(t_node** root, int number);

//prototipo da função de liberar(free) a lista
void ft_free_list(t_node** root);

//prototipo da função de inserção no inicio da lista
void ft_insert_beginning(t_node** root, int number);

//prototipo da função de inserção depois de um nó especifico
void ft_insert_after(t_node* node, int number);

//prototipo da função de inserção ordenada
void ft_insert_sorted(t_node** root, int number);

//prototipo da fnução de remoção de um elemento
void ft_remove_element(t_node** root, int number);

//prototipo da função para inverter a lista
void ft_reverse_list(t_node** root);

#endif
