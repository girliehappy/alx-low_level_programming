#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int h, sum, y;

	sum = 0;

	srand(time(NULL));

	for (h = 0; h < 100; h++)
	{
		password[h] = rand() % 78;
		sum += (password[h] + '0');
		putchar(password[h] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}

