#include"holberton.h"
#include<stdio.h>
/**
 *print_array - prints array
 *@a : array
 *@n : integer
 *Result: 0
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (i == n)
printf("%d\n", a[i]);
else
printf("%d, ", a[i]);
}
}
