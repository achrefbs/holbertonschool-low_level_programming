#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb : int
 *@size : int
 *Return: pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
