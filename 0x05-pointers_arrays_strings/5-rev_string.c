#include "holberton.h"

/**
 * rev_string - reversa de la cadena
 * @s: cadena
 */
void rev_string(char *s)
{
	char c;
	int i, a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (i = 0; i < a / 2; i++)
	{
		c = s[i];
		s[i] = s[b];
		s[b--] = c;
	}
}
