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
	int i;
	char *cpystr;

	cpystr = malloc(sizeof(str));
	if (str == NULL)
	return (NULL);
	if (cpystr == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		cpystr[i] = str[i];
	}
	cpystr[i + 1] = '\0';
	return (cpystr);
	free(cpystr);
}
