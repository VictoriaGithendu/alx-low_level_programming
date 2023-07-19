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
	unsigned char opcode;

	int bytes, x;

	int (*address)(int, char **) = main;

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
	for (x = 0; x < bytes; x++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (x == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
