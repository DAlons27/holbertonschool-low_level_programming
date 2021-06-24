#include "holberton.h"

/**
 * _isalpha - comprueba los caracteres alfabeticos
 * @c: devulve 1 si es letra mayuscula o miniscula
 * Return: devuelve cero en caso contrario
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
