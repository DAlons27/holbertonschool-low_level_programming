#include <stdio.h>
#include "holberton.h"

/**
 * main - imprime todos los arguementos que recibe
 * @argc: numero de argumentos
 * @argv: numero de arrays
 *
 * Return: siempre 0 si coincide
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
