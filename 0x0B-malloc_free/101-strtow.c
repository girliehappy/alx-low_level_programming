#include <stdlib.h>
#include "main.h"

/**
* count_word - A function to count the number of words in a string
* @p: The string to evaluate
* Return: The number of words
*/
int count_word(char *p)
{
	int flag, c, t;

	flag = 0;
	t = 0;

	for (c = 0; p[c] != '\0'; c++)
	{
		if (p[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			t++;
		}
	}
	return (t);
}
/**
* **strtow - A function that splits a string into words
* @str: The string to split
* Return: NULL if str == NULL or str == ""
* If your function fails, it should return NULL
*/
char **strtow(char *str)
{
	char **mat, *temp;
	int t, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (t = 0; t <= len; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (c)
			{
				end = t;
				temp = (char *) malloc(sizeof(char) * (c + 1));

				if (temp == NULL)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mat[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = t;
	}
	mat[k] = NULL;
	return (mat);
}
