#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 ***alloc_grid -  a function that returns a pointer to a 2 d array of integers.
 *@width : int
 *@height : int
 *Return: 2d array
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}