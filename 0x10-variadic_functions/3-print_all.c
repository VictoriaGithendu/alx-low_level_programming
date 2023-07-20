#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguements
 * @...: variable number
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *s, *sep = "";

	int x = 0;

	va_list y;

	va_start(y, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(y, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(y, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(y, double));
					break;
				case 's':
					s = va_arg(y, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					x++;
					continue;
			}
			sep = ",";
			x++;
		}
	}
	printf("\n");
	va_end(y);
}
