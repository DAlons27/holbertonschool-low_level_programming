#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - imprime la suma de las dos diagonales
 * @a: matriz cuadrada de la cual imprimimos la suma de diagonales
 * @size: tamaño de la matriz
 */
void print_diagsums(int *a, int size)
{
int i;

unsigned int sum, sum1;

sum = 0;
sum1 = 0;

for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
sum1 += a[(size * (i + 1)) - (i + 1)];
}

printf("%d, %d\n", sum, sum1);
}
