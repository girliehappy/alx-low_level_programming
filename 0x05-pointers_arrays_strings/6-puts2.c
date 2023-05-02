#include "main.h"
/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be printed
 */
void puts2(char *str)
{
	int stri = 0;
	int p = 0;
	char *z = str;
	int h;

	while (*z != '\0')
	{
		z++;
		stri++;
	}
	p = stri - 1;
	for (h = 0 ; h <= p ; h++)
	{
		if (h % 2 == 0)
	{
		_putchar(str[h]);
	}
	}
	_putchar('\n');

}
