#include "holberton.h"
/**
**_memset -  fills memory with a constant byte.
*@s : pointer
*@b : char
*@n : int
*Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (p);
}
