#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer
 * @size: int
 * @value: int
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, m;
	size_t r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
        {
			printf("%d, ", array[m]);
        }
		printf("%d\n", array[m]);
		m = (l + r) / 2;
		if (array[m] < value)
        {
			l = m + 1;
        }
		else if (array[m] > value)
        {
			r = m - 1;
        }
		else
        {
			return (m);
        }
	}
	return (-1);
}
