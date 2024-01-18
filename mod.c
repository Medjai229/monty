#include "monty.h"
/**
 * s_mod - find the mod of the second top element of the stack
 * by the top element of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_mod(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, mod;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	mod = tmp->next->n % tmp->n;
	tmp->next->n = mod;
	*head = tmp->next;
	free(tmp);
}
