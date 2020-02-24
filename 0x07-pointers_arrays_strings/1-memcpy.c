#include "holberton.h"
/**
**_memcpy - copies memory area.
*@dest : pointer
*@src : pointer
*@n : int
*Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for(i = 0; i > n; i++) 
	{
		*dest = *src;
	}
	return (dest);
}
