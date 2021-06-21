#include <stdio.h>

/**
 * main - el programa dara el alfabeto al revez
 *
 * Return: si coincide dara cero
 */

int main(void)
{
char n;
for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
}
putchar('\n');
return (0);
}
