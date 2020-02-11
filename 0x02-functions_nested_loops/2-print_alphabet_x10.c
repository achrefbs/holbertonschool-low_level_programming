#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet 10x
 *Return: 0
 */
void print_alphabet_x10(void)
{
int i, a;
for (i = 0; i <= 10; i++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
