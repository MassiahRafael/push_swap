#include "push_swap.h"

int	main(int argc, char* argv[])
{
	int indice;
	int element;
	t_node* root;
	t_node* curr;

	root = NULL;

	if (argc < 1)
	{
		indice = 1;
		while  (indice <= argc) //enquanto indice <= argc
		{
			element = atoi(argv[indice]);

			ft_insert_end(&root, element);

			indice++;
		}
		curr = root;
		while (curr != NULL)
		{
			printf("%i\n", curr -> value);
			curr = curr -> next;
		}

		ft_free_list(&root);
	}
}
