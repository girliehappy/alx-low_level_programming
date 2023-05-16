#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @dest: points to the destination memory area
 * @src: points to the source memory area
 * @n: the number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int h = 0;

        while (h < n)
        {
                *(dest + h) = *(src + h);
                h++;
        }
        return (dest);
}
