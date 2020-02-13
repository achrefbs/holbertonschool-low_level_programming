#include "holberton.h"
/**
 * print_most_numbers - prints numbers but 2/4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
i = 0;
for (i = 0; i <= 9; i++)
{
if (i != 4 && i != 2)
{
_putchar(i);
}
}
_putchar('\n');
}
