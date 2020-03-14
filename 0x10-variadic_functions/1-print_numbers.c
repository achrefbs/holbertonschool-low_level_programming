#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - a function that prints numbers, followed by a new line.
 *@separator : pointer to a string
 *@n : unsigned int
 *Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator != NULL)
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("%d", va_arg(list, int));
	if (separator == NULL)
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
	}
	printf("\n");
}
