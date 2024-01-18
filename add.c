#include "monty.h"
/**
 * s_add - adds the top two elements of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_add(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, sum;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;
	*head = tmp->next;
	free(tmp);
}
