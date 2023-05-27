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
	va_list strs;
	char *string;
	unsigned int index;

	va_start(strs, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(strs, char *);

		if (string == NULL)
			printf("(nil)");

		else
			printf("%s", string);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}