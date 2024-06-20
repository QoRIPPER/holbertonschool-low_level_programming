#include <stdio.h>
#include "main.h"
/**
 * fizzbuzz - leleloo
 */

void fizzbuzz(void)
{
int i;
	for (int i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	printf("\n");
}
/**
 * main - lelelo
 * Return: cookery
 */

int main(void)
{
	fizzbuzz();
	return (0);
}
