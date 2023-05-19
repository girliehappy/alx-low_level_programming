#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The string to append to
 * @s2: The string to concatenate from
 * @n: The number of bytes from s2 to concatenate to s1
 * Return: A pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *p;
	unsigned int t = 0, r = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = (malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 2));
	if (!p)
		return (NULL);
	while (t < len1)
	{
		p[t] = s1[t];
		t++;
	}
	while (n < len2 && t < (len1 + n))
		p[t++] = s2[r++];
	while (n >= len2 && t < (len1 + len2))
		p[t++] = s2[r++];
		p[t] = '\0';
		return (p);
}
