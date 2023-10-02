#include "main.h"
#include<stdlib.h>
/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: name of the file
 * @letters: no of letters to read and print
 * Return: actual no of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x;
	ssize_t y;
	ssize_t z;

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
