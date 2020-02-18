#include"holberton.h"
/**
 *rev_string - reverse string
 *@s : string
 *Return: 0
 */
void rev_string(char *s)
{
char h;
int i, j;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (j = 0 ; j < c / 2 ; j++)
{
h = s[c - j - 1];
s[c - j - 1] = s[j];
s[j] = h;
}
}
