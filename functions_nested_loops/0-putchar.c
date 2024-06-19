#include <stdio.h>
/**
*main - lelo
*_putchar - The character to print
*Return: lelo
* @c: The character to print
*/
/*function prototype*/
int _putchar(char c)
{

	return write(1, &c, 1);
}
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
