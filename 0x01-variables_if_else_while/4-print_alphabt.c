#include <stdio.h>

/**
 * main - la funcion dara comor resultado el alfabeto
 *
 * Return: si coincide es cero
 */

int main(void)
{
char alfabeto = 'a';
while (alfabeto <= 'z')
{
if (alfabeto != 'e' && alfabeto != 'q')
{
putchar(alfabeto);
}
alfabeto++;
}
putchar('\n');
return (0);
}
