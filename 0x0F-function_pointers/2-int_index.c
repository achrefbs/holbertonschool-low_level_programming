#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;
	if (array == NULL || cmp == NULL)
	return (0);
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
		return(i);
	}
	return (-1);
	

}