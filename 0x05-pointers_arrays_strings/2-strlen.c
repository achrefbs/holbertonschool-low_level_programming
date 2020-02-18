#include "holberton.h"
/**
 *_strlen - length of string
 *@s : string
 *Return: len
 */
int _strlen(char *s)
{
int i;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
return (c);
}
