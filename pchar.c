#include "monty.h"
/**
 * s_pchar - prints the char at the top of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_pchar(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	tmp = *head;
	if (!tmp)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (tmp->n < 0 || tmp->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
