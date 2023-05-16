#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: string to be printed
 * Return: length
 */
int _strlen(char *s)
{
        int peace = 0;

        while (*s != '\0')
        {
                peace++;
                s++;
        }

        return (peace);
}
