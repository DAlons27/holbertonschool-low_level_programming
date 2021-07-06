#include "holberton.h"

/**
 * print_chessboard - imprime el tablero de ajedrez
 * @a: matriz de dos dimensiones para imprimir
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
