#include "monty.h"
/**
 * addqueue - addes a node to the stack tail
 * @n: value to be added
 * @head: pointer to the stack head
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}

	if (!tmp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}
