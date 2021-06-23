#include "holberton.h"

/**
* print_alphabet - imprime el alfabeto en miniscula
*
* Return: void.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
}
