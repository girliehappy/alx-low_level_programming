#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int l;
	int a;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (a = 0; a < 52; a++)
		{
			if (s[l] == data1[a])
			{
				s[l] = datarot[a];
				break;
			}
		}
	}
	return (s);
}

