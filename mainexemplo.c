#include "push_swap.h"

int main(int argc, char* argv[])
{
	t_node* root;
	t_node* curr;

	root = NULL;

	ft_insert_end(&root, 10);
	ft_insert_end(&root, 35);
	ft_insert_end(&root, 40);
	ft_insert_end(&root, 100);

	curr = root;
	while(curr != NULL)
	{
		printf("%i\n", curr -> value);
		curr = curr -> next;
	}

	ft_insert_beginning(&root, 1);
	ft_insert_after(root, 2);
	ft_insert_sorted(&root, 5);
	ft_insert_sorted(&root, 25);

	curr = root;
	printf("new insertion\n");
	while(curr != NULL)
	{
		printf("%i\n", curr -> value);
		curr = curr -> next;
	}

	ft_remove_element(&root, 40);

	curr = root;
	printf("element removed\n");
	while(curr != NULL)
	{
		printf("%i\n", curr -> value);
		curr = curr -> next;
	}

	ft_reverse_list(&root);

	curr = root;
	printf("reverse\n");
	while(curr != NULL)
	{
		printf("%i\n", curr -> value);
		curr = curr -> next;
	}

	ft_free_list(&root);

	return (0);
}
