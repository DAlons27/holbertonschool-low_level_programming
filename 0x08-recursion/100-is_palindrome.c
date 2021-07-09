#include "holberton.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - comprueba si una cuerda es un palíndromo
 * @s: cuerda para revertir
 *
 * Return: 1 si lo es, 0 no lo es
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

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

/**
 * check_pal - comprueba los caracteres de forma recursiva para palíndromo
 * @s: cadena para comprobar
 * @i: iteracion
 * @len: longitud de la cuerda
 *
 * Return: 1 si palíndromo, 0 si no
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
