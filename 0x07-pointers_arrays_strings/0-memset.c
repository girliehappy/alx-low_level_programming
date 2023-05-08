#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled, as a char pointer
 * @b: The byte to fill memory with, as a char
 * @n: The number of bytes to fill, as an unsigned int
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;
	
	while (p < n)
	{
		*(s + p) = b;
		p++;
	}
	return (s);
}
