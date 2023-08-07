#include "main.h"
#include<stdlib.h>
#include<stdio.h>
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
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (0);
	y = open(argv[1], O_RDONLY);
	check_98(y, buffer, argv[1]);
	x = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_99(x, buffer, argv[2]);
	do {
		z = read(y, buffer, O_RDONLY);
		if (z == 0)
			break;
		check_98(z, buffer, argv[1]);
		v = write(x, buffer, z);
		check_99(v, buffer, argv[2]);
	} while (v >= 1024);
	z = close(x);
	check_100(z, buffer);
	z = close(y);
	check_100(z, buffer);
	free(buffer);
	return (0);
}
/**
 * check_98  - checks error 98
 * @buffer: Buffer
 * @argv: array of arguements
 * @x: Value
 */
void check_98(int x, char *argv[], char *buffer)
{
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
}
/**
 * check_99 - Checks error 99
 * @buffer: Buffer
 * @argv: array of arguements
 * @x: value
 */
void check_99(int x, char *buffer, char *argv[])
{
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * check_100 - Checks error 100
 * @x: value
 * @buffer: Buffer
 */
void check_100(int x, char *buffer)
{
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", x);
		free(buffer);
		exit(100);
	}
}
