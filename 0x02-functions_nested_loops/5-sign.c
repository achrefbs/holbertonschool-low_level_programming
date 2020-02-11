#include "holberton.h"
/**
 *print_sign - pritns the sign of number
 *Return: 0
 *@n : integer
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
}
