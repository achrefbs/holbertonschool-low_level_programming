#include "holberton.h"
char *cap_string(char *s)
{
    int i;
    for (i = 0; s[i] != '\0' ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && !(s[i - 1] >= 'a' && s[i - 1] <= 'z' ) && s[i - 1] != '-' && s[i - 1] >= 0 && s[i - 1] <= 9 )
        {
            if(!(s[i - 1] >= 'A' && s[i - 1] <= 'Z'))
            s[i] = s[i] - 32;
        }
    }
    return (s);
    
}