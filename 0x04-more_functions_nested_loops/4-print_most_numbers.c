#include "holberton.h"
/**
 * print_most_numbers - prints numbers but 2/4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
for (i = 0; i <= 9; i++)
{
if (i != 4 && i != 2)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
