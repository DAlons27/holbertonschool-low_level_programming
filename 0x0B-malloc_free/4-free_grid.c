#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - libera la asignación de memoria para la cuadrícula
 * @grid: cuadrícula para liberar
 * @height: altura de la cuadrícula
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
