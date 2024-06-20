#include "main.h"
/**
 * main - lolo lolo
 * mul -  multiplies two integers for cook
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	int result = a * b;

print_number(result);

_putchar('\n');

return (result);
}

int main(void)
{
	int a = 6;

	int b = 7;

	mul(a, b);

	return (0);
}
