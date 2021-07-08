#include "holberton.h"

/**
 * _strlen_recursion - devuelve la longitud de una cadena
 * @s: cadena para calcular la longitud de
 *
 * Return: longitud de la cuerda
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
