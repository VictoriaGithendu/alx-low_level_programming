#include "main.h"
#include<stdio.h>
/**
 * error_file - function tht checks if files can open
 * @filename: name of file
 */
void error_file(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * copy_file_content - function that copies contents
 * @file_from: file from
 * @file_to: file to
 */
void copy_file_content(int file_from, int file_to)
{
	char *buffer = malloc(1024);
	ssize_t r, w;

	while ((r = read(file_from, buffer, 1024)) > 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file\n");
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	free(buffer);
}
/**
 * main - main
 * @argc: no of arguements
 * @argv: arguements vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		error_file(argv[1]);
	}
	if (file_to == -1)
	{
		error_file(argv[2]);
	}
	copy_file_content(file_from, file_to);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
