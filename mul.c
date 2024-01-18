#include "monty.h"
/**
 * s_mul - adds the top two elements of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_mul(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, mul;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	mul = tmp->n * tmp->next->n;
	tmp->next->n = mul;
	*head = tmp->next;
	free(tmp);
}
