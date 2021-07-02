#include "holberton.h"

/**
 * _strncpy - cadena a copiar
 * @dest: destino de cadena
 * @src: cadena inciial
 * @n: numero de bytes a copiar
 * Return: pointer resultado de la cadena
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
