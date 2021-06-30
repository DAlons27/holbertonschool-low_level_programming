#include "holberton.h"

/**
 * _puts - imprime la cadena
 * @str: puntero de la cadena a imprimir
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
