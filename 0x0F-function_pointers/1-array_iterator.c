#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  ejecuta la funcion segun los parametros
 * @array: matriz sobre la que iterar
 * @size: tamaño del array
 * @action: pointer de funcion a usar
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
