#include "main.h"
/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number.
 * @n: the number
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - A function that  recurses to find the natural
 * square root of a number
 * @n: number to be used to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int p, int t)
{
	if (t * t > p)
		return (-1);
	if (t * t == p)
		return (t);
	return (actual_sqrt_recursion(p, t + 1));
}

