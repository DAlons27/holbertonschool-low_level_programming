#include "holberton.h"

/**
 * _strncat - concatena n bytes de una cadena a otra
 * @dest: destino de la cadena
 * @src: fuente de la cadena
 * @n: número de bytes de str para concatenar
 * Return: un puntero a la cadena resultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
