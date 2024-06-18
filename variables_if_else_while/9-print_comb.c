#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers separated by ", "
 * in ascending order using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar(i + '0');

	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
