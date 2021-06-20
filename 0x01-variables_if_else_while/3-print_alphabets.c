#include <stdio.h>

/**
 * main - la funcion principal nos dara el alfabeto
 *
 * Return: si coincide es cero
 */

int main(void)
{
int alf;

for (alf = 'a'; alf <= 'z'; alf++)
putchar(alf);

for (alf = 'A'; alf <= 'Z'; alf++)
putchar(alf);

putchar('\n');
return (0);
}
