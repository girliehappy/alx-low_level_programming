#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * Return: The concate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int j, f;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	j = f = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[f] != '\0')
		f++;
	concat = malloc(sizeof(char) * (j + f + 1));

	if (concat == NULL)
		return (NULL);
	j = f = 0;
	while (s1[j] != '\0')
	{
		concat[j] = s1[j];
		j++;
	}
	while (s2[f] != '\0')
	{
		concat[j] = s2[f];
		j++, f++;
	}
	concat[j] = '\0';
	return (concat);
}
