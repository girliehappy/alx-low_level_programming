#include <stdio.h>
#include "main.h"

/**
 * _atoi - A program that converts a string to an integer
 * @s: The string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int h, a, p, len, f, digit;

	h = 0;
	a = 0;
	p = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && f == 0)
	{
		if (s[h] == '-')
			++a;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (a % 2)
				digit = -digit;
			p = p * 10 + digit;
			f = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			f = 0;
		}
		h++;
	}

	if (f == 0)
		return (0);

	return (p);
}

/**
 * main - A program that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
