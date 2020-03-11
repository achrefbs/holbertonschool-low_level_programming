#include "3-calc.h"
int main (int ac, char *av[])
{
	int n1, n2;
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	printf("%d\n",get_op_func(av[2])(n1, n2));
	return(0);
}