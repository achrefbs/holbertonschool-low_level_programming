#include <stdio.h>
/**
*main -  a program that prints the number of arguments passed into it.
*@argc : int
*@argv : pointer to a string
*Return: 0
*/
int main(int argc, char *argv[])
{	
	if(argc > 1)
	printf("%d\n", argc - 1);
	return (0);
}
