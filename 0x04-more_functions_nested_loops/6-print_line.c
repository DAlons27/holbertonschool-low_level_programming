#include "holberton.h"

/**
 * print_line - imprime lineas
 * @n: es el numero de lineas
 * followed by a new line
 */

void print_line(int n)
{
char c;

for (c = 0; c < n; c++)
_putchar('_');
_putchar('\n');
}
