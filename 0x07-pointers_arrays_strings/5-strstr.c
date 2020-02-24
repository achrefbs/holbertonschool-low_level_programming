#include <stdio.h>
#include "holberton.h"
/**
*_strstr - a function that locates a substring.
*@haystack: pointer
*@needle: pointer
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int n;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
