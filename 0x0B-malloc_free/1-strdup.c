#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: The character
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *rps;
	int p, y = 0;


	if (str == NULL)
		return (NULL);
	p = 0;

	while (str[p] != '\0')
		p++;

	rps = malloc(sizeof(char) * (p + 1));
	if (rps == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		rps[y] = str[y];

	return (rps);
}
