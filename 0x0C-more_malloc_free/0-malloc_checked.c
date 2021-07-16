#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - asigna memoria usando malloc
 * @b: el numero de bytes para asignar
 *
 * Return: un puntero a la memoria asignada
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
