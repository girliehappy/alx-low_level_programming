#include "main.h"
/**
 * _strncat - A function that concatenate two strings
 * It will be using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int e;
	int m;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	m = 0;
	/*while (m < n && src[m] != '\0')
	{
	dest[e] = src[m];
	e++;
	m++;
	}*/
	dest[e] = '\0';
	return (dest);
}

