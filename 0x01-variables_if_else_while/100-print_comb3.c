#include <stdio.h>
/**
 *main - pritns numbers
 *Return: 0
 */
int main(void)
{
int fc;
int sc;
for (fc = 48; fc <= 56; fc++)
{
for (sc = fc + 1; sc <= 57; sc++)
{
if (fc != sc)
{
putchar(fc);
putchar(sc);
}
if (fc < 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
