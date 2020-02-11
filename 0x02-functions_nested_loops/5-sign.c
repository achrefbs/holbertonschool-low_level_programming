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
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
