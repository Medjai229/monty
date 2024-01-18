#include "monty.h"
/**
 * s_pstr -  prints the string starting at the top of the stack
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_pstr(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void)counter;

	tmp = *head;
	while (tmp)
	{
		if (tmp->n <= 0 || tmp->n > 127)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
