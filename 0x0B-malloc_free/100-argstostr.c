#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int t, n, p = 0, l = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (n = 0; av[t][n]; n++)
		l++;
	}

	l += ac;

	string = malloc(sizeof(char) * l + 1);

	if (string == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
	for (n = 0; av[t][n]; n++)
	{
		string[p] = av[t][n];
		p++;
	}

	if (string[p] == '\0')
	{
		string[p++] = '\n';
	}
	}
	return (string);
}
