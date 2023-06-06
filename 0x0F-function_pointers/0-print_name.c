#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name
 * @name: The string to add
 * @f: A pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

