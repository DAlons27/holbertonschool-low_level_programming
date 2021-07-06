#include "holberton.h"

/**
 * *_memset - llena la memoria con un byte constante
 * @s: area de memoria para ser llenado
 * @b: cadena a copiar
 * @n: número de veces para copiar b
 *
 * Return: puntero al área de memoria s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
