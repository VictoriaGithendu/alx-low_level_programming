#include "main.h"
#include<stdlib.h>
/**
 * read_textfile - Function that reads text file and prints it in STDOUT
 * @letters: letters to read and print
 * @filename: file to be read
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, w = 0, t;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	t = read(fd, buffer, letters);

	if (t == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
