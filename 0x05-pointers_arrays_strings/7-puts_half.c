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
if ((c % 2) == 0)
{
    i = i /2 ;
}
else 
{
    i = i +1 /2;
}
while(*(str +i))
{
    _putchar(str[i]);
    i++;
}
_putchar('\n');
}
