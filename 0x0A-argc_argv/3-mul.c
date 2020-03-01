#include <stdio.h>
#include <stdlib.h>
/**
 *main -  a program that multiplies two numbers.
 *@argc : int
 *@argv : pointer to a string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int s = 0;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
