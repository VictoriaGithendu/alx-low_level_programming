#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: Name of the file created
 * @text_content: NULL terminated string to write
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z])
			z++;
	}
	x = open(filename, O_CREAT | O_RWDR | O_TRUNC, 0600)
		y = write(x, text_content, z);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
