#include "3-calc.h"

/**
 * op_add - calcula la suma de dos enteros
 * @a: primer entero
 * @b: segundo entero
 *
 * Return: suma de a y b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calcula la suma de dos enteros
 * @a: primer entero
 * @b: segundo entero
 *
 * Return: diferencia de a y b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - 0x0F-function_pointers
 * @a: primer entero
 * @b: segundo entero
 *
 * Return: producto de a y b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calcula la división de dos enteros
 * @a: primer entero
 * @b: segundo entero
 *
 * Return: division de a y b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - resto de la division de dos enteros
 * @a: primer entero
 * @b: segundo entero
 *
 * Return: resto de la division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
