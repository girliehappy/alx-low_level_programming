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
	if (n == 0 || n == 1)
	{
	return (n);
	}
	for (int p = 1; p <= n / 2; p++)
	{
		if (p * p == n)
		{
			return p;
		}
		else if (p * p > n)
		{
			break;
		}
	}
	return (n * _sqrt_recursion((n) - 1));
}
