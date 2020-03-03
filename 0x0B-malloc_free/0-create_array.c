#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - a function that returns a pointer to a copy of the string.
 *@size : size of array
 *@c : char
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	return (NULL);
	else
	{
		char *str;

		str = malloc(sizeof(char) * size);
		if (str == NULL)
		return (NULL);
		else
		{
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
		}
		return (str);
		free(str);
	}
}
