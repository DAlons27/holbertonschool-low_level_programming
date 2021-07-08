#include "holberton.h"

/**
 * _puts_recursion - imprime una cadena, seguida de una nueva línea
 * @s: cadena para imprimir
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
