#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: pointer to name file
 * @text_content: NULL terminated string
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (length > 0)
	{
		w = write(fd, text_content, length);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
