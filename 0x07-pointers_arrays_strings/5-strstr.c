#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - localiza una subcadena
 * @haystack: cadena para buscar
 * @needle: subcadena para buscar
 *
 * Return: puntero al comienzo de la subcadena ubicada
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
