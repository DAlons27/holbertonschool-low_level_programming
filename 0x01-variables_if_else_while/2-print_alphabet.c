#include <stdio.h>

/**
 * main - el programa imprimira el alfabeto en miniscula
 *
 * Return: da cero si coincide, de nos ser no zero
 */

int main(void)
{
char alfmin;

for (alfmin = 'a'; alfmin <= 'z'; alfmin++)
{
putchar(alfmin);
}
putchar('\n');
return (0);
}
