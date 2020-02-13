#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *@n : integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; j++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n');
}
}
}
