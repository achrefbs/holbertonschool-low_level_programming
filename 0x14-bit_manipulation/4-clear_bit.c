/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n : pointer to unsigned long int
 * @index : unsigned int
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t = 1;

	if (index > sizeof(t) * 8)
	return (-1);
	t <<= index;
	*n &= ~t;
	return (1);
}
