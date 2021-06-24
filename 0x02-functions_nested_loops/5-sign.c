#include "holberton.h"

/**
 * print_sign - compara numeros
 * @n: el caracterer a comparar
 * Return: 1 si es positivo, 0 si es cero, -1 si es negativo
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar(48);
}
return (0);
}
