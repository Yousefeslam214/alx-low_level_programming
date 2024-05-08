#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - op_add
 * @a: first term
 * @b: second term
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - op_sub
 * @a: first term
 * @b: second term
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - op_mul
 * @a: first term
 * @b: second term
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - op_div
 * @a: first term
 * @b: second term
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - op_mod
 * @a: first term
 * @b: second term
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
