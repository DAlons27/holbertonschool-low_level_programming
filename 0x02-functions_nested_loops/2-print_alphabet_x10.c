#include "holberton.h"

/**
 * print_alphabet_x10 - escribe 10 veces el alfabeto
 *
 * Return: siempre 0
 */

void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;

while (i < 10)
{
ch  = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
