#include "monty.h"
/**
 * s_swap - swaps the top two elements of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_swap(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, tmp_n;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	tmp_n = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;
}
