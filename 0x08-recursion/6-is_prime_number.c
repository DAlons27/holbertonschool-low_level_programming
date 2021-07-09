#include "holberton.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - dice si un entero es un número primo o no
 * @n: numero a evaluar
 *
 * Return: 1 si n es un número primo, 0 si no
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calcula si un número es primo de forma recursiva
 * @n: numero a evaluar
 * @i: iteracion
 *
 * Return: 1 si n es primo, 0 si no
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
