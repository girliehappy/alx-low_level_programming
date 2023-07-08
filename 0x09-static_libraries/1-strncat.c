#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int a;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[h] = src[a];
	h++;
	a++;
	}
	dest[h] = '\0';
	return (dest);
}
