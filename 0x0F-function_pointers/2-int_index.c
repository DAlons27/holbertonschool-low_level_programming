#include "function_pointers.h"

/**
 * int_index - busca a un numero entero
 * @array: matriz para buscar
 * @size: tamaño de la matriz
 * @cmp: puntero a la función de comparación
 *
 * Return: devuelve 0, o -1 si no se encuentra ninguna coincidencia
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
