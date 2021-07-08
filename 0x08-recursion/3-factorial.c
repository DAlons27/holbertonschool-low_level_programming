#include "holberton.h"

/**
 * factorial - devuelve el factorial de un número
 * @n: Numero para devolver el factorial
 *
 * Return: factorial de n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
