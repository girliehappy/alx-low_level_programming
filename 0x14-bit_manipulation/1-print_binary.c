#include "main.h"

/**
 * print_binary - A function that prints the binary equivalent
 * of a decimal number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int h, counte = 0;
	unsigned long int curt;

	for (h = 63; h >= 0; h--)
	{
		curt = n >> h;

		if (curt & 1)
		{
			_putchar('1');
			counte++;
		}
		else if (counte)
			_putchar('0');
	}
	if (!counte)
		_putchar('0');
}
