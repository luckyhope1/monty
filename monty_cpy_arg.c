#include "monty.h"

/**
 * cpy_arg - function that copies argument of push in buffer
 * @buff: buffer to be copied the argument
 * @t: linked list of instructions
 * Return: 0 if it fails or other positive number otherwise
 */
int cpy_arg(list_t *t, char *buff)
{
	int k, q;

	for (k = 0; k < 10024; k++)
		buff[k] = 0;

	for (k = 5, q = 0; t->inst[k] != '\0' && t->inst[k] != ' '; k++, q++)
		buff[q] = t->inst[k];

	buff[q] = '\0';

	return (q);
}
