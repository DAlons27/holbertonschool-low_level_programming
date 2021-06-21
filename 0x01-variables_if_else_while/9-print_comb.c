#include <stdio.h>

/**
 * main - el programa dara las posibles combinaciones de un digito
 *
 * Return: si coincide dara cero
 */

int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
