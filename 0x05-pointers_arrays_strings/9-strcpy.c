#include "holberton.h"
/**
*_strcpy - copy a string
*@dest: string
*@src: string
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
    int i;
for (i = 0; src[i] != '\0'; i++)
{
    dest[i] = src[i];
}
return (dest);
}
