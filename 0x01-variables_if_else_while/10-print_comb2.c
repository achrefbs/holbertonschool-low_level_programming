#include <stdio.h>
/**
 *main - print the numbers from 00 to 99
 *Return: 0
 */
int main(void)
{
int fd, sd;
for (fd = 48; fd <= 57; fd++)
{
for (sd = 48; sd <= 57; sd++)
{
putchar(fd);
putchar(sd);
if (fd == 57 && sd == 57)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
