#include <stdlib.h>
#include <time.h>
/**
*main - beggining of the program
*Description : Generate a random number and print if it is positive, negative, or zero.
*return: always 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
