#include <stdio.h>
/**
 *main - prints the sum of muliples of 5 or 3
 *Return: 0
 */
void main(void)
{
int x3, x5, i, s1, s2, s;
for (i = 1; i * 3 < 1024; i++)
{
x3 = i * 3;
s1 = s1 + x3;
}
for (i = 1; i * 5 < 1024; i++)
{
x5 = i * 5;
s2 = s2 + x5;
}
s = s1 + s2;
printf("%d", s);
}
