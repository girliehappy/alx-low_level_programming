#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings
 * @separator:  is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: is the variable number of strings to be printed
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil)
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *strings;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		strings = va_arg(str, char *);

		if (strings == NULL)
			printf("(nil)");
		else
			printf("%s", strings);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
