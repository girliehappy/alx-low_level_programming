#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: This is the number of parameters passed to the function
 * @...: This acts as a variable number of parameters to calculatethe sum of
 * Return: 0 if If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list allprmt;
	unsigned int t, sum = 0;

	va_start(allprmt, n);

	for (t = 0; t < n; t++)
		sum += va_arg(allprmt, int);

	va_end(allprmt);

	return (sum);
}
