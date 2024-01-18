#include "monty.h"
/**
 * s_pop - removes the top element of the stack
 * @head: pointer to the stack head
 * @counter: line number
 */
void s_pop(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	*head = tmp->next;
	free(tmp);
}
