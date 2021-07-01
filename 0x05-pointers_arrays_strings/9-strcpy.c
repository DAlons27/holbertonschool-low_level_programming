#include "holberton.h"

/**
 * *_strcpy - copiando cadena incluido el nulo
 * @dest: pointer
 * @src: cadena a copiar
 *
 * Return: el pointer dest
 */
char *_strcpy(char *dest, char *src)
{
int a, i;

a = 0;

while (src[a] != '\0')
{
a++;
}

for (i = 0; i < a; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
