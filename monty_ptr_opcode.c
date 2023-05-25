#include "monty.h"

/**
 * ptr_opcode - Pointer function of struct array
 * @head: Head of the list
 * Return: pointer to an array of structures
 */

void (*ptr_opcode(list_t *head))(stack_t **stack, unsigned int line_number)
{
	int k, p;
	char buff[10024];
	list_t *h = head;

	instruction_t arr_ptr[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"queue", queue},
		{"stack", stack},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	for (k = 0; arr_ptr[k].f; k++)
	{
		p = cmp_inst(head->inst, arr_ptr[k].opcode);
		if (p == 0)
			return (arr_ptr[k].f);
	}
	for (k = 0; k < 10024; k++)
		buff[k] = 0;
	for (k = 0; h->inst[k] != '\n' && h->inst[k] && h->inst[k] != ' '; k++)
		buff[k] = h->inst[k];
	buff[k] = '\0';
	fprintf(stderr, "L%d: unknown instruction %s\n", head->n, buff);
	return (nothing);
}
