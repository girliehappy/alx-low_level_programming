#include "main.h"
/**
 * print_rev - A function that prints the reverse of a string
 * followed by a new line
 * @s: string to be printed
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int stri = 0;
	int p;

	while (*s != '\0')
	{
	stri++;
	s++;
	}
	s--;
	for (p = stri; p > 0; p--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
