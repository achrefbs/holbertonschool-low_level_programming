#include <stdio.h>
/**
 *main - print all combinations of single-digit
 *Return: 0
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
