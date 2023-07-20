#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints a string
 * @separator: string to be printed
 * @n: no of strings
 * @...: variable number
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int x;

	char *s;

	va_start(string, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

	if (x != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
printf("\n");
va_end(string);
}
