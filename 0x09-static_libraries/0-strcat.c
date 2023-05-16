#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * @dest: First input value
 * @src: Second input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
        int e;
        int m;

        e = 0;
        while (dest[e] != '\0')
        {
                e++;
        }
        m = 0;
        while (src[m] != '\0')
        {
                dest[e] = src[m];
                e++;
                m++;
        }

        dest[e] = '\0';
        return (dest);
}
