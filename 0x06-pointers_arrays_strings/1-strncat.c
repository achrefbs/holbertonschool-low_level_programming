#include "holberton.h"
/**
*_strncat - concatenate 2 strings
*@dest : string
*@src : string
*@n : integer
*Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; i < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i + j] = '\0';
return (dest);
}
