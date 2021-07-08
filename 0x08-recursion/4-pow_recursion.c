#include "holberton.h"

/**
 * _pow_recursion - devuelve el valor de x elevado a la potencia de y
 * @x: valor a aumentar
 * @y: power
 *
 * Return: resultado de la potencia
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
