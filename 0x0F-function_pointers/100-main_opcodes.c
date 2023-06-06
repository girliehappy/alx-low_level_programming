#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, t;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (t = 0; t < b; t++)
	{
		if (t == b - 1)
		{
			printf("%02hhx\n", a[t]);
			break;
		}
		printf("%02hhx ", a[t]);
	}
	return (0);
}
