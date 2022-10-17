#include "push_swap.h"

//implementaçao da função de inserção no final da lista
void ft_insert_end(t_node** root, int number)
{
	t_node* new_node;
	t_node* curr;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit (1);
	new_node -> next = NULL;
	new_node -> value = number;

	if(*root == NULL)
	{
		*root = new_node;
		return;
	}

	curr = *root; //recebe o endereço que o ponteiro de ponteiro root esta apontando;
	while(curr -> next != NULL)//enquanto o next do elemento atual for diferente de NULL
	{
		curr = curr -> next;
	}
	curr -> next = new_node;
}

//implementação da função de liberar(free) a lista
void ft_free_list(t_node** root)
{
	t_node* curr;
	t_node* aux;

	curr = *root;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr -> next;
		free(aux);
	}
	*root = NULL;
}

//implementação da função de inserção no inicio da lista
void ft_insert_beginning(t_node** root, int number)
{
	t_node* new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit (2);

	new_node -> value = number;
	new_node -> next = *root;

	*root = new_node;
}

//implementação da função de inserção depois de um nó especifico
void ft_insert_after(t_node* node, int number)
{
	t_node* new_node;
	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit (3);
	new_node -> value = number;
	new_node -> next = node -> next;
	node -> next = new_node;
}

//prototipo da função de inserção ordenada
void ft_insert_sorted(t_node** root, int number)
{
	t_node* curr;

	if (*root == NULL || (**root).value >= number) //condição se o elemento for inserido no inicio da lista
	{                 // (*root) -> value  é == (**root).value /  dereference 2x chega no node it self - 1x  chega no endereço que ele esta apontando
		ft_insert_beginning(root, number);
		return;
	}
	curr = *root;
	while(curr -> next != NULL)
	{
		if (curr -> next -> value >= number)
			break;
		curr = curr -> next;
	}
	ft_insert_after(curr, number);
}

//prototipo da fnução de remoção de um elemento
void ft_remove_element(t_node** root, int number)
{
	t_node* curr;
	t_node* to_remove;

	if (*root == NULL)
		return;
	if ((**root).value == number)
	{
		to_remove = *root;
		*root = (*root) -> next;
		free (to_remove);
	}
	curr = *root;
	while (curr -> next != NULL)
	{
		if (curr -> next -> value == number)
		{
			to_remove = curr -> next;
			curr -> next = curr -> next -> next;
			free(to_remove);
		}
		curr = curr -> next;
	}
}

//prototipo da função para inverter a lista
 void ft_reverse_list(t_node** root)
 {
	t_node* prev;
	t_node* curr;
	t_node* next;

	prev = NULL;
	curr = *root;
	while(curr != NULL)
	{
		next = curr -> next;

		curr -> next = prev;

		prev = curr;
		curr = next;
	}
	*root = prev;
 }
