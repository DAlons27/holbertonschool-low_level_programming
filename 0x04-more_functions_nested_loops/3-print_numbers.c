#include "holberton.h"

/**
 * print_numbers - imprimira numeros del 0 al 9
 *
 * Return: siempre 0 si coincide
 */

void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
