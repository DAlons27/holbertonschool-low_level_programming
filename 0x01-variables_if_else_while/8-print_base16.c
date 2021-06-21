#include <stdio.h>

/**
 * main - el programa dara el alfabeto al revez
 *
 * Return: si coincide dara cero
 */

int main(void)
{
int a;
char b;
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
