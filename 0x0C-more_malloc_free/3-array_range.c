#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - crea una matriz de enteros
 * @min: rango mínimo de valores almacenados
 * @max: rango máximo de valores almacenados y número de elementos
 *
 * Return: puntero a la nueva matriz
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}
