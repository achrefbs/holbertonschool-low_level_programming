#include "holberton.h"
/**
*leet - encodes a string into 1337.
*@s: string
*Return: str
*/
char *leet(char *s)
{
int i, j;
char c[] = "aAeEoOtTlL", n[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (s[i] == c[j])
s[i] = n[j];
}
}
return (s);
}
