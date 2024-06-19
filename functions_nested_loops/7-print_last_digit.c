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

	if (n < 0)
	last_digit = -1 * (n % 10); /* Handle negative numbers */
	else
	last_digit = n % 10;

	_putchar(last_digit + '0'); /* Print the last digit */
	return (last_digit);
}
