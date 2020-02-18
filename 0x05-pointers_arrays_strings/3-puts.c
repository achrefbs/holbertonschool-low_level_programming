#include"holberton.h"
/**
 *_puts - prints string
 *@str : string
 *Return: 0
 */
void _puts(char *str)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
