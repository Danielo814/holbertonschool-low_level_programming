#include "holberton.h"
/**
 * append_text_to_file - appends text to file
 *
 * @filename: name of file
 * @text_content: command
 *
 * Return: 1 on success of program and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
	{
		b = 0;
		while (text_content[b] != 0)
			b++;
		write(a, text_content, b);
	}
	close(a);
	return (1);
}
