#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
*main -  a program that prints the number of arguments passed into it.
*@argc : int
*@argv : pointer to a string
*Return: 0
*/
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
