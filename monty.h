#ifndef _MONTY_H_
#define _MONTY_H_

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX 1024

/*ESTRUCTURES*/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
extern stack_t *head;
/**
 * struct data_t - opcode and its argument
 * @op: the opcode
 * @arg: argument
 * @fd: file descriptor
 * @line: line number
 *
 *Description: opcode and its argument
 */
typedef struct data_s
{
	char *op;
	int arg;
	FILE *fd;
	unsigned int line;
} data_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, data_t *d);
} instruction_t;

/*FUNCTIONS*/
void print_dlistint(stack_t *h);
stack_t *add_dnodeint(stack_t **head, const int n);
int eval(char *s, int n);
void run_op(data_t *data, stack_t **head);
void parse(char *buffer, data_t *d, stack_t **h);
void push(stack_t **h, data_t *d);
void pall(stack_t **h, data_t *d __attribute__((unused)));
void free_list(stack_t *head);
void pint(stack_t **h, data_t *d);
void pop(stack_t **h, data_t *d);
void swap(stack_t **h, data_t *d);
void add(stack_t **h, data_t *d);
void swap(stack_t **h, data_t *d);
int dprintf(int fd, const char *format, ...);
char *strdup(const char *s);

#endif
