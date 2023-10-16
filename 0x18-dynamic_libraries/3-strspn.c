#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	{
		d++;
		break;
	}
	else if (accept[a + 1] == '\0')
		return (d);
	}
	s++;
	}
	return (d);
}
