#include "main.h"

int check_pal(char *s, int p, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome and
 * 0 if not
 * @s: the strng
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
	return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - This will return the length of a string
 * @s: This string calculates the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - This checks the characters recursively for palindrome
 * @s: string to check
 * @p: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int p, int length)
{
	if (*(s + p) != *(s + length - 1))
	{
		return (0);
	}
	if (p >= length)
	{
		return (1);
	}
	return (check_pal(s, p + 1, length - 1));
}
