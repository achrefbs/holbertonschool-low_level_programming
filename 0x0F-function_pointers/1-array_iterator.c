#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - a function that executes a function given as a parameter.
 *@array : pointer to an array of integer
 *@size : size_t size of the array
 *@action : pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
