#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	last_digit = -last_digit;  /* handle negative numbers */

	/* Convert last_digit to char and print using _putchar */
	_putchar('0' + last_digit);
	_putchar('\n');  /* Print a newline after the last digit */

	return (last_digit);
}
