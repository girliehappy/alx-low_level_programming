#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: The string containing the binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[h] - '0');
	}

	return (dec_value);
}
