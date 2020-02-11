#include "holberton.h"
/**
 *print_last_digit - prints last digit
 *@x : integer
 *Return: 0
 */
int print_last_digit(int x)
{
if (x < 0)
{
x = -x;
x = x % 10;
_putchar(x + '0');
return (x);
}
else
{
x = x % 10;
_putchar(x + '0');
return (x);
}
}
