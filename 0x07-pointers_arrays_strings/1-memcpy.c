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
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
