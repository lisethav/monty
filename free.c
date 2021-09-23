#include "monty.h"
/**
 *free_list -  frees a stack_t list
 *@head: input of type stack_t
 */
void free_list(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
