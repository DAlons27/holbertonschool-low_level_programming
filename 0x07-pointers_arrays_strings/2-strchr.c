#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - localiza un carácter en una cadena
 * @s: busqueda de cadena
 * @c: char a encontrar
 *
 * Return: un puntero
 */
char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
