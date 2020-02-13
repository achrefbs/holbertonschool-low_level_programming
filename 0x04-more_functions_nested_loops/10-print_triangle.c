#include "holberton.h"
/**
 *print_triangle - prints triangle
 *@size : size
 *Return: 0
 */
void print_triangle(int size)
{
int i, j, s;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (s = 1; s <= size - i; s++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
