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
	char *t;
	if (str == NULL)
	return (NULL);
	cpystr = malloc(sizeof(str));
	t = cpystr;
	if (cpystr == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		t[i] = str[i];
	}
	return (cpystr);
}
