#include "holberton.h"
/**
 *_atoi - convert into integer
 *@s : string
 *Return: 0
 */
int _atoi(char *s)
{
int i, sign = 1;
unsigned int n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
if ((s[i - 1] >= '0' && s[i - 1] <= '9') || n == 0)
n = (n * 10) + (s[i] - '0');
else
break;
}
}
return (n *sign);
}
