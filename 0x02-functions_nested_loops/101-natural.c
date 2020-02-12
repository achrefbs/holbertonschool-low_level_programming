#include <stdio.h>
/**
 *main - prints the sum of muliples of 5 or 3
 *Return: 0
 */
int main(void)
{
int i;
long int s;
for (i = 0; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
s = s + i;
}
}
printf("%ld\n", s);
return (0);
}
