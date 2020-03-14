#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - a function that prints strings, followed by a new line.
*@separator: pointer to a string
*@n: unsigned int
*Return: NULL
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(list, char *);
		if (s != NULL)
		printf("%s", s);
		else
		printf("(nil)");

		if (separator != NULL)
		printf("%s", separator);
	}
	s = va_arg(list, char *);
		if (s != NULL)
		printf("%s\n", s);
		else
		printf("(nil)\n");
	va_end(list);
}
