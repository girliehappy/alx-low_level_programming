#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: the value to dest, string
 */
char *_strcpy(char *dest, char *src)
{
        int p = 0;
        int h = 0;

        while (*(src + p) != '\0')
        {
                p++;
        }
        for ( ; h < p; h++)
        {
                dest[h] = src[h];
        }
                dest[p] = '\0';
                return (dest);
}
