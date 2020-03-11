#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer.
 *@array : pointer to an array of integers
 *@size : integer size arrary
 *@cmp : pointer to function
 *Return: index if true else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (array == NULL || cmp == NULL)
	return (-1);
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
		return (i);
	}
	return (-1);
}
