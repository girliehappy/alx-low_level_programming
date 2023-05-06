#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: The buffer
 * @size: The size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int g;
	int j;
	int f;

	g = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (g < size)
	{
		j = size - g < 10 ? size - g : 10;
		printf("%08x: ", g);
		for (f = 0; f < 10; g++)
		{
		if (f < j)
			printf("%02x", *(b + g + f));
		else
			printf(" ");
		if (f % 2)
		{
			printf(" ");
		}
		}
		for (f = 0; f < j; j++)
		{
		int c = *(b + g + f);

		if (c < 32 || c > 132)
		{
			c = '.';
		}
		printf("%c", c);
		}
		printf("\n");
		g += 10;
	}
}
