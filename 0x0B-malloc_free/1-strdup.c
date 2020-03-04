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
	int i = 0, l;
	char *cpystr;

	for (l = 0; str[l] != '\0'; l++)
	;
	if (str == NULL)
	return (NULL);
	cpystr = malloc(sizeof(char) * l + 1);
	if (cpystr == NULL)
	return (NULL);
	while (i <= l)
	{
		cpystr[i] = str[i];
		i++;
	}
	return (cpystr);
}
