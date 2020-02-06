#include <stdio.h>
/**
 *main - prints all the number of base 16
 *Return: 0
 */
int main(void)
{
int i;
char c;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
