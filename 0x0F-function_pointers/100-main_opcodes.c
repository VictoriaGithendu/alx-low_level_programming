#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints opcodes
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s;

	int bytes, x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", s[x]);
			break;
		}
		printf("%02hhx\n", s[x]);
	}
	return (0);
}
