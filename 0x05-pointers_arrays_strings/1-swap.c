#include "holberton.h"
/**
 * swap_int -  swap a and b
 * Return: 0
 * @a  :integer
 * @b : integer
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
