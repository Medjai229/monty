#include "monty.h"
/**
 * s_pall - prints all the values on the stack
 * @head: pointer to the stack head
 * @counter: line number
 */
void s_pall(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void)counter;

	tmp = *head;

	if (tmp == NULL)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
