#include "monty.h"

/**
 * pall - Function that prints the stack
 * @stack: stack structure
 * @line_number: number of instruction
 */

void pall(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;
	int q = 0;

	if (*stack == NULL)
		return;

	temp = *stack;

	while (temp)
	{
		q = temp->n;
		printf("%d\n", q);
		temp = temp->next;
	}
}
