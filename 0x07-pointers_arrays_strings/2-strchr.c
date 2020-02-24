#include "holberton.h"
#include <stdio.h>
/**
**_strchr - a function that locates a character in a string.
*@s : pointer
*@c : char
*Return: 0
*/
char *_strchr(char *s, char c)
{
	for (; *s != c && *s != '\0'; s++)
	;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
