#include "holberton.h"

/**
 * rot13 - codificacion de cadena en rot 13
 * @s: cadena a codificar
 *
 * Return: el resultado de la cadena
 */
char *rot13(char *s)
{
int i, j;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}

return (s);
}
