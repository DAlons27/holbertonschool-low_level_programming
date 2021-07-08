#include "holberton.h"

/**
 * _print_rev_recursion - imprime una cadena al revés
 * @s: cadena para imprimir
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
