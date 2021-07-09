#include <stdio.h>
#include "holberton.h"

/**
 * main - imprime el número de argumentos pasados ​​al programa
 * @argc: numero de argumentos
 * @argv: numero de arrays
 *
 * Return: siempre 0 si coincide
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
