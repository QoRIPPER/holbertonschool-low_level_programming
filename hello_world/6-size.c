#include <stdio.h>

int main(void)
{
	printf("char:%zu int:%zu short:%zu long:%zu ll:%zu float:%zu double:%zu ld:%zu ptr:%zu\n",
	       sizeof(char), sizeof(int), sizeof(short), sizeof(long), sizeof(long long),
	       sizeof(float), sizeof(double), sizeof(long double), sizeof(void *));
	return (0);
}
