#include "holberton.h"

/**
 * swap_int - intercambio de numeros
 * @a: primera variable
 * @b: segunda variable
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
