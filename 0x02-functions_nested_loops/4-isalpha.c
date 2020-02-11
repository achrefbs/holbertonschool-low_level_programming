#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character
 *Return: 0
 *@c :integer
 */
int _isalpha(int c)
{
if ((c > 65 && c < 90) || (c > 97 && c < 122))
{
return (1);
}
return (0);
}
