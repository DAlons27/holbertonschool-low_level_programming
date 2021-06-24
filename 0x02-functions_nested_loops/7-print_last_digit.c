#include "holberton.h"

/**
 * print_last_digit - imprimir el ultimo digito
 * @n: de aqui se tomara el numero
 * Return: devolvera el ultimo digito
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
