#include <stdio.h>
#include "holberton.h"

/**
 * print_array - imprime n elementos del arry
 * @a: array para imprimir
 * @n: numero de elementos a imprimir
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
