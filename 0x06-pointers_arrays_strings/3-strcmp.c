#include "holberton.h"
/**
 * _strcmp - copies a string
 *@s1 : string
 *@s2 : string
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] != s2[i])
break;
}
return (s1[i] - s2[i]);
}
