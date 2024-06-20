#include <unistd.h>
/**
* _putchar - hehehe
*
* @c: character
*Return: always succes
*/
int_putchar(char c)
{
return (write(1, &c, 1));
}
