#include "holberton.h"

/**
 * string_toupper - cambia todas las letras minúsculas de una cadena
 * @s: cadena a modificar
 *
 * Return: el resultado de la cadena
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}

return (s);
}
