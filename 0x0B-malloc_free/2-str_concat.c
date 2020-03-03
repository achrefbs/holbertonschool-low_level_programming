#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup - a function that creates an array of chars.
 *@str : array of char
 *Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int l1, i, j;
	char *s;
	s = malloc(sizeof(s1) + sizeof(s2));
	if (s == NULL)
	return (NULL);
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (i = 0; i <= l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = l1; s2[j - l1] != '\0'; j++)
	{
		s[j] = s2[j - l1];
	}
	return(s);
	
	
	
	
}