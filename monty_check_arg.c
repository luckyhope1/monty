#include "monty.h"

/**
 * check_arg - Function that checks if is a valid argument
 * @buff: buffer to be checked
 * Return: 0 if it fails or a positive number otherwise
 */
int check_arg(char *buff)
{
	int k;

	if (buff[0] == '-' || buff[0] == '+')
	{
		if (buff[1] < '0' || buff[1] > '9')
			return (0);
	}
	else if (buff[0] < '0' || buff[0] > '9')
		return (0);

	for (k = 1; buff[k] && buff[k] != ' '; k++)
		if (buff[k] < '0' || buff[k] > '9')
			return (0);

	return (1);
}
