#include "holberton.h"

/**
 * more_numbers - imprime numeros de 0 al 14 , dies veces
 * seguido de una nueva linea
 */

void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
