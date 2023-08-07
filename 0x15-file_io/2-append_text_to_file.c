#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
		y = write(x, text_content, z);
		if (x == -1 || y == -1)
			return (-1);
		close(x);
		return (1);
}
