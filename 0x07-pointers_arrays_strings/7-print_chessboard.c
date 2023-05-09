#include "main.h"
/**
 * print_chessboard - A function that prints the chessboard
 * @a: as an array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int l;

	for (p = 0; p < 8; p++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[p][l]);
		_putchar('\0');
	}
}
