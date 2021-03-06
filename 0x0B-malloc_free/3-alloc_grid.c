#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 ***alloc_grid -  a function that returns a pointer to a 2 d array of integers.
 *@width : int
 *@height : int
 *Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);
	else
	{
		t = malloc(sizeof(int *) * height);
		if (t == NULL)
		return (NULL);
		for (i = 0; i < height; i++)
		{
			t[i] = malloc(sizeof(int) * width);
			if (t[i] == NULL)
			{
				while (i >= 0)
				{
					free(t[i]);
					i--;
				}
				free(t);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				t[i][j] = 0;
			}
		}
		return (t);
	}
}
