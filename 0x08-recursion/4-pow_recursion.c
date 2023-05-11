#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x 
 * raised to the power of y
 * @x: input
 * @y: input
 * Return: -1 If y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (x == 0)
	{
		return (1);
		x++;
	}
	return (x  * _pow_recursion((x - 1), y));
}
