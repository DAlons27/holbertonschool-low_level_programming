#include "holberton.h"

/**
 * _islower - para buscar caracteres en minuscula
 * @c: el caractere para verificar
 * Return: 1 si es caracter minuscula y 0 de lo cotrario
 */

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
