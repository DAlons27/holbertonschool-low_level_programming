#include "holberton.h"

/**
 * _atoi - convierte la cadena a caracteres
 * @s: cadena a convertir
 *
 * Return: el entero convertido a cadena
 */
int _atoi(char *s)
{
	int i, d, n, a, f, digit;

	i = 0;
	d = 0;
	n = 0;
	a = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		a++;

	while (i < a && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
