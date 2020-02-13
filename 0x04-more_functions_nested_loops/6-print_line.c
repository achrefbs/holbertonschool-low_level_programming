#include "holberton.h"
/**
 * print_line - prints lines
 *@n : integer
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if(i <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
