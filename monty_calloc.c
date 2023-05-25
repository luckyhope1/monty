#include "monty.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nnmber: number of elements
 * @size: size of bytes
 *
 * Return: a pointer to the allocated memory, Otherwise, if nmemb or size is 0,
 * or malloc fails, returns NULL
 */

void *_calloc(unsigned int number, unsigned int size)
{
	char *p;
	unsigned int i;

	if (number == 0 || size == 0)
		return (NULL);

	p = malloc(number * size);

	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < (number * size); i++)
		p[i] = 0;

	return (p);
}
