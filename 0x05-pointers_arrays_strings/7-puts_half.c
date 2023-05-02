#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * The function should print the second half of the string
 * @str: string to be inputed
 * Return: half of input
 */
void puts_half(char *str)
{
	int p, h, stri;

	stri = 0;

	for (p = 0; str[p] != '\0'; p++)
		stri++;

	h = (stri / 2);

	if ((stri % 2) == 1)
		h = ((stri + 1) / 2);

	for (p = h; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');

}
