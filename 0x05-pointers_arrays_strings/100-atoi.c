#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: The string to be converted
 *
 * Return: the int that is converted from the string
 */
int _atoi(char *s)
{
	int h, a, p, len, y, digit;

	h = 0;
	a = 0;
	p = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && y == 0)
	{
		if (s[h] == '-')
			++a;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (a % 2)
				digit = -digit;
			p = p * 10 + digit;
			y = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			y = 0;
		}
		h++;
	}

	if (y == 0)
		return (0);

	return (p);
}

