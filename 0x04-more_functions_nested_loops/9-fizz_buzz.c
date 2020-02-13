#include <stdio.h>
/**
 *main - FizzBuzz
 *Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("buzz ");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
