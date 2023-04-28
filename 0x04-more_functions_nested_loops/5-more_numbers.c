#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 up to 10  times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
	{
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		continue;
		}
	_putchar('0' + j);
	}
	_putchar('\n');
	}
}
