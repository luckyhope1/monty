#include "monty.h"

/**
 * cmp_inst - Function that compares instructions with the function pointers
 * @str1: String 1
 * @str2: String 2
 * Return: 0 on success and -1 otherwise
 */
int cmp_inst(char *str1, char *str2)
{
	int k = 0, n = 0;

	for (k = 0; str2[k]; k++)
	{
		if (str1[k] == str2[k])
			n = 0;
		else
		{
			n = str1[k] - str2[k];
			break;
		}
	}

	if (str1[k] != ' ' && str1[k] != '\t' && str1[k] != '\0' && str1[k] != '\n')
		n = 1;

	return (n);
}
