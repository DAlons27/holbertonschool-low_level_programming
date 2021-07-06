#include "holberton.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, a, b, c;

b = 0;

for (i = 0; s[i] != '\0'; i++)
{
c = 0;
for (a = 0; accept[a] != '\0'; a++)
{
if (s[i] == accept[a])
{
b++;
c = 1;
}
}
if (c == 0)
{
return (b);
}
}

return (0);
}
