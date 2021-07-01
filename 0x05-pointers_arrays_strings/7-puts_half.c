#include "holberton.h"

/**
 * puts_half - imprime la mitad de una cuerda
 * @str: imprime la cadena
 */

void puts_half(char *str)
{
int a, b, i;

a = 0;

while (str[a] != '\0')
{
a++;
}

if (a % 2 == 0)
{
for (i = a / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (a % 2)
{
for (b = (a - 1) / 2; b < a - 1; b++)
{
_putchar(str[b + 1]);
}
}
_putchar('\n');
}
