#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, function prints only a new line.
 * Otherwise, prints a right-aligned triangle of '#' characters.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int row, column;

	for (row = 1; row <= size; row++)
	{
	for (column = 1; column <= size; column++)
	}
	if (column <= size - row)
	_putchar(' ');
	else
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

