#include <stdio.h>

/**
* main- prints
* Description: prints the size of various types on the computer it is compiled and run on
* Return: always 0
*/

int main(void)
{
printf("char: %zu\nshort: %zu\nint: %zu\nlong: %zu\n"
"long long: %zu\nfloat: %zu\ndouble: %zu\n"
"long long int: %zu\n",
sizeof(char), sizeof(short), sizeof(int), sizeof(long),sizeof(long int),sizeof(long long int)
sizeof(long long), sizeof(float), sizeof(double),
sizeof(long double));

return (0);
}
