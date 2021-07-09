#include "holberton.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - devuelve la raíz cuadrada natural de un número
 * @n: número para calcular la raíz cuadrada de
 *
 * Return: la raíz cuadrada resultante
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - encuentra
 * @n: número para calcular la raíz cuadrada
 * @i: iteracion
 *
 * Return: la raíz cuadrada resultante
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
