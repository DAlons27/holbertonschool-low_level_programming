#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - imprime nombre
 * @name: nombre a imprimir
 * @f: puntero a la función de impresión
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
