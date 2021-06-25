#include "holberton.h"

/**
 * print_most_numbers - imprime numeros del 0 al 9
 * los numeros 2 y 4 no se imprimen
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
