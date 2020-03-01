#include "holberton.h"
/**
*main -  a program that prints its name, followed by a new line.
*@argc : int
*@argv : pointer to a string
*Return: 0
*/
int main(int argc, char *argv[])
{
while (*argv[0])
_putchar(*argv[0]++);
_putchar('\n');
return (0);
}
