#include"holberton.h"
/**
 *print_rev - print on reverse
 *@s : string
 *Return: 0
 */
void print_rev(char *s)
{
int i;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (i = c; i >= 0; i--)
{
if (s[i] != '\0')
_putchar(s[i]);
}
_putchar('\n');
}
