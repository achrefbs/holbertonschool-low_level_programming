#include "holberton.h"
/**
*_strcpy - copy a string
*@dest: string
*@src: string
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
while (*src++)
*dest++ = *src++;
return (dest);
}
