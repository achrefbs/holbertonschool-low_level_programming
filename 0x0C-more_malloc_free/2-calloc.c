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
	void *a;

	if (size == 0 || nmemb == 0)
	return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	return (NULL);
	return (a);
}
