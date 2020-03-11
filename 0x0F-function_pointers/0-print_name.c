#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - a function that prints a name.
 *@name : pointer to a string
 *@f : pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	return;
	f(name);
}
