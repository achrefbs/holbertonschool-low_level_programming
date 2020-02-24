#include "holberton.h"
#include <stdio.h>
char *_strchr(char *s, char c)
{
	char *r;
	int i, n, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
		{
			return(NULL);
		}
		else
		{
			n = s[i];
			break;
		}
	}
	for (j = n; s[j] != '\0' ; j++)
	{
		*r = s[j];
		r++;
	}
	return(r);
}