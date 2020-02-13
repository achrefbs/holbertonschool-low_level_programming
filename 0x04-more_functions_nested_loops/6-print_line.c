#include "holberton.h"
/**
 * print_line - prints lines
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (n == 0)
{
_putchar('\n');
}
else 
{
_putchar('_');
}
}
_putchar('\n');
}
