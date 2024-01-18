#include "monty.h"
/**
 * s_rotl - rotates the stack to the top
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_rotl(stack_t **head, unsigned int counter)
{
	stack_t *top;
	stack_t *tmp = *head;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
		return;

	top = (*head)->next;
	top->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = top;
}
