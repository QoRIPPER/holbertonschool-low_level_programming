#include "main.h"
/**
 * print_square - prints a square of '#' characters
 * @size: size of the square
 *
 * Description: If size is 0 or less, prints only a new line.
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
