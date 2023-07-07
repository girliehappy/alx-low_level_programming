#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
