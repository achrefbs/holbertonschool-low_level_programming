#include "holberton.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*@s: pointer
*@accept: pointer
*Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	char p1, *p2;

	for (p1 = *s; p1 != 0; s++)
	{
		p1 = *s;
		for (p2 = accept; *p2 != 0; p2++)
		{
			if (p1 == *p2)
			{
				return (s);
			}
		}
	}
	return (0);
}
