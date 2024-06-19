#include "main.h"
/**
 * times_table - prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
		result = i * 9;
		if (result >= 10)
		{
			_putchar('0' + result / 10);
			_putchar('0' + result % 10);
		}
		else
		{
			if (i > 0)
				_putchar(' ');
			_putchar('0' + result);
		}

		if (i < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
