#include "monty.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated memory
 * @str: String to be allocated
 * @fo: open file
 * Return: Return a string allocated or NULL if it fails
 */

char *_strdup(char *str, FILE *fo)
{
	int k;
	char *new;

	if (str == NULL)
		return (NULL);

	k = _strlen(str);

	new = _calloc(k + 1, sizeof(char));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (list_opcode)
			free_list_opcode(list_opcode);
		fclose(fo);
		exit(EXIT_FAILURE);
	}

	for (k = 0; k < str[k]; k++)
		new[k] = str[k];

	new[k] = '\0';

	return (new);
}
