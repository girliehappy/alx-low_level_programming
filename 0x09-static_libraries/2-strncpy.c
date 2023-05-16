#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: First value to be inputted
 * @src: Second value to be inputted
 * @n: Third value to be inputted
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int f;

        f = 0;
        while (f < n && src[f] != '\0')
        {
                dest[f] = src[f];
                f++;
        }
        while (f < n)
        {
                dest[f] = '\0';
                f++;
        }
        return (dest);
}
