#include "holberton.h"
/**
 * more_numbers - prints from 1 to 14 (15 times)
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, x;
for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
