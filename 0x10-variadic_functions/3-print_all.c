#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: The list of types of arguements passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int t = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		
		while (format[t]);
		{
	
			switch (format[t])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				t++;
				continue;
		}
		sep = ", ";
		t++;
	}
	}
	printf("\n");
	va_end(list);
}
