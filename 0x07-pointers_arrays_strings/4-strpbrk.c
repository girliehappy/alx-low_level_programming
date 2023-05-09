#include "main.h"
/**
 * _strpbrk - A a function that searches a string for any of a set of bytes
 * @s: first string to search
 * @accept: second string to search
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char  *b = accept;

	while (*b != '\0')
	{
	if (*s == *b)
	{
	return (s);
	}
	b++;
	}
	s++;
	}
	return (NULL);
}
