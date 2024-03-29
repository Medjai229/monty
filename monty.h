#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables- args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 *
 * Description: carries values throughout the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void s_push(stack_t **h, unsigned int counter);
void s_pall(stack_t **head, unsigned int counter);
void s_pint(stack_t **head, unsigned int counter);
void s_pop(stack_t **head, unsigned int counter);
void s_swap(stack_t **head, unsigned int counter);
void s_add(stack_t **head, unsigned int counter);
void s_nop(stack_t **head, unsigned int counter);
void s_sub(stack_t **head, unsigned int counter);
void s_div(stack_t **head, unsigned int counter);
void s_mul(stack_t **head, unsigned int counter);
void s_mod(stack_t **head, unsigned int counter);
void s_pchar(stack_t **head, unsigned int counter);
void s_pstr(stack_t **head, unsigned int counter);
void s_rotl(stack_t **head, unsigned int counter);
void s_rotr(stack_t **head, unsigned int counter);
void s_stack(stack_t **head, unsigned int counter);
void q_queue(stack_t **head, unsigned int counter);

#endif /* MONTY_H */
