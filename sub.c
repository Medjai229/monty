#include "monty.h"
/**
 * s_sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, sub;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	sub = tmp->next->n - tmp->n;
	tmp->next->n = sub;
	*head = tmp->next;
	free(tmp);
}
