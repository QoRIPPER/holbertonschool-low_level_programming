#include "main.h"
/**
*print_alphabet_x10 - lelo
*Description: lelo
*Return: lelo
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 26; j++)
	{
	_putchar(letter + j);
	}
	_putchar('\n');
	}
}
