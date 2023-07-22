#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguements passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int t = 0;
	char *str, *sept = "";

	va_list print_anything;

	va_start(print_anything, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sept, va_arg(print_anything, int));
					break;
				case 'i':
					printf("%s%d", sept, va_arg(print_anything, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(print_anything, double));
					break;
				case 's':
					str = va_arg(print_anything, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sept, str);
					break;
				default:
					t++;
					continue;
			}
			sept = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(print_anything);
}
