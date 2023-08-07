#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * create_buffer - function to allocate bytes
 * @file: file buffer name
 * Return: pointer to buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) *1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Function to close file descriptors
 * @fd: Closed file descriptor
 */
void close_file(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Function to copy file contents
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int x, y, z, v;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	x = open(argv[1], O_RDONLY);
	z = read(x, buffer, 1024);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (x == -1 || z == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		v = write(y, buffer, z);
		if (y == -1 || v == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		z = read(x, buffer, 1024);
		y = open(argv[2], O_WRONLY, O_APPEND);
	} while (z > 0);
	free(buffer);
	close_file(x);
	close_file(y);
	return (0);
}
