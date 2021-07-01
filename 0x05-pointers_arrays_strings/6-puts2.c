#include "holberton.h"

/**
 * puts2 - imprimir caracteres pares
 * @str: caracteres que forman parte de la cadena
 */
void puts2(char *str)
{
int a, i;

a = 0;

while (str[a] != '\0')
{
a++;
}

for (i = 0; i < a; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
