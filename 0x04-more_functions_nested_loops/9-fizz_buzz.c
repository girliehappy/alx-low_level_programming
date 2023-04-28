#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 * but for the muntiples of three prints fizz instead of the number
 * and for multiples of fivr prints buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
	if (i % 3 == 0 && i % 5 != 3)
	{
	printf(" Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 3)
	{
		printf("Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
		printf(" FizzBuzz");
	}
	else if (i == 1)
	{
	print("%d", i);
	}
	else
	{
	printf(" %d", i);
	}
	}
	printf("\n");

	return (0);
}
