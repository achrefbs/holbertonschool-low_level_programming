#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return(ptr);
	}
	if (old_size < new_size)
	{
		tmp = malloc(new_size);
		tmp = (char *)(ptr);
	}
free (ptr);
return(tmp);
}