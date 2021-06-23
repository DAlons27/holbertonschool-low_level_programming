#include "holberton.h"

/**
 * main escribir el alfabeto
 *
 * Return: siempre cero si coincide
 */

void print_alphabet(void);
{
it i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
