#include "monty.h"
/**
 * s_rotr -  rotates the stack to the bottom
 * @head: pointer of the stack head
 * @counter: line number
 */
void s_rotr(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
		return;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	(*head) = tmp;
}
