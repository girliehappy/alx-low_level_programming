#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		current = exclusive >> h;
		if (current & 1)
			count++;
	}

	return (count);
}
