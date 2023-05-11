#include "main.h"
/**
 * _sqrt_recursion - A function that returns the natural square root 
 * of a number.
 * @n: the number
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n != 0)
	{
		return (-1);
	}
	return (n * _sqrt_recursion(n));
}
