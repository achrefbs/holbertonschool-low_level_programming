#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup - a function that creates an array of chars.
 *@str : array of char
 *Return: array
 */
char *_strdup(char *str)
{
	int i, l;
	char *cpystr;

	for (l = 0; str[l] != '\0'; l++)
	;
	if (str == NULL)
	return (NULL);
	cpystr = malloc(sizeof(char) * l);
	if (cpystr == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		cpystr[i] = str[i];
	}
	cpystr[i] = '\0';
	return (cpystr);
}
