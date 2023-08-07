#include "main.h"
#include<stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX
 * @filename: Text file to be read
 * @letters: Letters to be read
 * Return: Actual no of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);
	free(buffer);
	close(x);
	return (y);
}
