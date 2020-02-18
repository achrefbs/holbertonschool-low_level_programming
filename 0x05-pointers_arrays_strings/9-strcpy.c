#include "holberton.h"
/**
*_strcpy - copy a string
*@dest: string
*@src: string
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
if ((dest != '\0') && (src != '\0'))
{
while (*src != '\0')
*dest++ = *src++;
*dest = '\0';
}
return (dest);
}
