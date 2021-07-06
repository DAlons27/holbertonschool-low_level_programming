#include "holberton.h"

/**
 * *_memcpy - copia el area de memoria
 * @dest: destino del area de la memoria
 * @src: memoria a copiar de
 * @n: numero de bytes a copiar
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
