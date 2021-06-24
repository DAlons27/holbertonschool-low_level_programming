#include <stdio.h>

/**
 * main - imprimir la serie de Fibonaccio
 *
 * Return: Siempre cero si coincide
 */

int main(void)
{
long int i, b, c, d;

b = 1;
c = 2;

for (i = 1; i <= 50; ++i)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
d = b + c;
b = c;
c = d;
}
return (0);
}
