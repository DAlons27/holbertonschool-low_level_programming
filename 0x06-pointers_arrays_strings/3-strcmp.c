#include "holberton.h"

/**
 * _strcmp - comparando cadenas
 * @s1: primera cadena
 * @s2: segunda cadena
 *
 * Return: menor que 0 si s1 es menor que s2, 0 si son iguales
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
