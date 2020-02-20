#include "holberton.h"
/**
*
*
*
*/
char *_strcat(char *dest, char *src)
{
    int i, j, x, l1 = 0, l2 = 0;
    
    for (i = 0; dest[i] == '\0'; i++)
    {
        l1++;
    }
    for (j = 0; src[j] == '\0'; j++)
    {
        l2++;
    }
    for ( x = l1; (x =l1 + l2); x++)
    {
        dest[x] = src[x - 6];
    }
    return (dest);

    
    
}