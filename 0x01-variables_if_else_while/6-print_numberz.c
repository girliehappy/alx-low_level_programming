#include <stdio.h>
/**
 * main - Entry point
 * Description: Print numbers from zero to nine
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
