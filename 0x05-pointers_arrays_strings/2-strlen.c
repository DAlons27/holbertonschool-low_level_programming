#include "holberton.h"

/**
 * _strlen - contara la cadena
 * @s: evalua la cadena
 *
 * Return: retorna 0 si coincide
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
