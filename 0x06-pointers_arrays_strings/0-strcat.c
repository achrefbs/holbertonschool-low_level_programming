#include "holberton.h"
/**
*
*
*
*/
char *_strcat(char *dest, char *src)
{
int dl = 0;
int i;
for(i = 0; src[i] != '\0'; i++)
dl++;
for (i = 0 ;src[i] != '\0' ; i++)
dest[dl + i] = src[i];
dest[dl + i] = '\0';
return (dest);
}