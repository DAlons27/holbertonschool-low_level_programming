#include "holberton.h"

/**
 * _strcat - concatena dos cadenas
 * @dest: cadena para agregar
 * @src: cadena para agregar
 * Return: puntero a la cadena resultante
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
