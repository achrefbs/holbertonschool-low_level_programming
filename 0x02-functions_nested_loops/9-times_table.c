#include "holberton.h"
/**
 *times_table - print the 9 times table
 *Return: 0
 */
void times_table(void)
{
int i, x;
for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 9; x++)
{
if (i * x <= 9 && x != 0 && x != 9)
{
_putchar(' ');
_putchar(' ');
_putchar(i * x + '0');
_putchar(',');
}
else if (i * x <= 9 && x == 0)
{
_putchar(i * x + '0');
_putchar(',');
}
else if (i * x >= 10 && x != 9)
{
_putchar(' ');
_putchar((i * x / 10) + '0');
_putchar((i * x % 10) + '0');
_putchar(',');
}
else if (i * x >= 10 && x == 9)
{
_putchar(' ');
_putchar((i * x / 10) + '0');
_putchar((i * x % 10) + '0');
}
else if (i * x <= 9 && x == 9)
{
_putchar(' ');
_putchar(' ');
_putchar(i * x + '0');
}
}
_putchar('\n');
}
}
