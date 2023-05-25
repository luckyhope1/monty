#include "monty.h"

/**
 * _strlen - Function that calculates a length of string
 * @str: String to be checked
 * Return: The length of string or -1 if it fails
 */

int _strlen(char *str)
{
	int k;

	if (str == NULL)
		return (-1);

	for (k = 0; str[k]; k++);

	return (k);
}
