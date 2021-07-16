#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - crea una matriz de caracteres
 * @size: tamaño de la matriz a crear
 * @c: char para inicializar la matriz c
 *
 * Return: puntero a la matriz (éxito), NULL (error)
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;

if (size == 0)
return (NULL);

p = (char *)malloc(sizeof(char) * size);

if (p == NULL)
return (0);

while (i < size)
{
*(p + i) = c;
i++;
}

*(p + i) = '\0';

return (p);
}
