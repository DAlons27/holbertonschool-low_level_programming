#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - copia la cadena dada como parámetro
 * @str: cadena para duplicar
 *
 * Return: puntero a la cadena copiada (éxito), NULL (error)
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

i = 0;
len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

while ((dup[i] = str[i]) != '\0')
i++;

return (dup);
}
