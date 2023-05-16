#include "main.h"
#include <stddef.h>
/**
 * _strstr - A function that locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0');
	{
		char *s = haystack;
		char *t = needle;
		
		while (*t != '\0' && *s == *t)
	{
		s++;
		t++;
	}
		if (*t == '\0')
	{
		return (haystack);
	}
		haystack++;
	}
	return (NULL);
}
