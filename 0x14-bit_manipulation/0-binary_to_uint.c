#include <stdlib.h>
/**
 * power - calculates 2 ^ i
 * @i : unsigned int
 * Return: unsigned int
 */
unsigned int power(unsigned int i)
{
	unsigned int n = 1;

	while (i != 0)
	{
		n *= 2;
		i--;
	}
	return (n);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : pointer to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int i, j, r = 0;

	if (b == NULL)
	return (0);
	for (i = 0; b[i] != '\0'; i++)
	;

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			i--;
			r += (b[j] - '0') * power(i);
		}
		else
		return (0);
	}

	return (r);
}
