#include "monty.h"

/**
 * clean_string - Function that cleans a string
 * @buff: buffer to store string
 * @str: String to be cleaned
 * Return: The length of string
 */
int clean_string(char *buff, char *str)
{
	int p, j, k = 0;

	for (p = 0, j = 0; str[p] && str[p] != '\n'; p++)
	{
		if (str[p] != ' ' && str[p] != '\t')
		{
			buff[j] = str[p];
			k = 1;
			j++;
		}
		else if (k == 1 && (str[p] == ' ' || str[p] == '\t'))
			break;
	}

	buff[j] = ' ';
	j++;

	for (; str[p] && str[p] != '\n'; p++)
	{
		if (str[p] != ' ' && str[p] != '\t')
		{
			buff[j] = str[p];
			k = 2;
			j++;
		}
		else if (k == 2 && (str[p] == ' ' || str[p] == '\t'))
			break;
	}

	buff[j] = '\0';

	return (j);
}
