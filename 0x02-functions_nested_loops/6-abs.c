#include "holberton.h"
/**
 *_abs - absolute value
 *@i : integer
 *Return: 0
 */
int _abs(int i)
{
if (i < 0)
{
i = -i;
_putchar(i);
}
else
{
_putchar(i);
}
}
