#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: no of arguements to be passed
 * @...: variable number
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;

	unsigned int y;

	va_start(x, n);
	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(x, int));

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
