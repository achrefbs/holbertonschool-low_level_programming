#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
	int i, sum = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);

	}
return (0);
}