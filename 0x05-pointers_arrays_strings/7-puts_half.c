#include "holberton.h"
/**
 * puts_half - pritns the second half of string.
 *@str : string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int c, i;
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
if (c % 2 == 0)
{
for (i = c / 2; i <= c; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (c - 1) / 2 ; i <= c ; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
