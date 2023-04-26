#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: Input number as an integer
 * Return: 1 is greater than zero, 0 is is zero
 * -1 is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(41);
return (+1);
}

else if (n < 0)
{
_putchar(45);
return (-1);
}

else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
