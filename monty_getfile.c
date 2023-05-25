#include "monty.h"

/**
 * get_file - a function for getting the monty ByteCode files
 * @str: String to be checked
 * Return: line counter. Otherwise if it fails, return the status EXIT_FAILURE
 */

int get_file(char *str)
{
	char *line_buf = NULL, buff[10024], *b = buff;
	size_t line_buf_size = 0;
	int line_counter = 0, k, q;
	ssize_t line_size = 0;
	FILE *fp = fopen(str, "r");

	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", str);
		exit(EXIT_FAILURE);
	}
	line_size = getline(&line_buf, &line_buf_size, fp);
	for (k = 0; k < 10024; k++)
		buff[k] = 0;
	while (line_size >= 0)
	{
		for (k = 0, q = 0; line_buf[k] && line_buf[k] != '\n'; k++)
		{
			if (line_buf[k] != ' ')
			{
				q++;
				break;
			}
		}
		if (line_buf[k] == '#')
		{
			line_size = getline(&line_buf, &line_buf_size, fp);
			line_counter++;
			continue;
		}
		line_counter++;
		if (q > 0)
		{
			clean_string(b, line_buf);
			create_instruction(&list_opcode, b, line_counter, fp);
		}
		line_size = getline(&line_buf, &line_buf_size, fp);
	}
	free(line_buf), line_buf = NULL, fclose(fp);
	return (line_counter);
}
