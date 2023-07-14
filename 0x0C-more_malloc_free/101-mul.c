#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - A function that checks if a string contains a non-digit char
 * @s: The string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int t = 0;

	while (s[t])
	{
		if (s[t] < '0' || s[t] > '9')
			return (0);
		t++;
	}
	return (1);
}

/**
 * _strlen -A function that returns the length of a string
 * @s: The string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

/**
 * errors - A function that handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A function that multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, t, c, dig1, dig2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (t = 0; t <= length1 + length2; t++)
		result[t] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		dig1 = s1[length1] - '0';
		c = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			dig2 = s2[length2] - '0';
			c += result[length1 + length2 + 1] + (dig1 * dig2);
			result[length1 + length2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[length1 + length2 + 1] += c;
	}
	for (t = 0; t < length - 1; t++)
	{
		if (result[t])
			b = 1;
		if (b)
			_putchar(result[t] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
