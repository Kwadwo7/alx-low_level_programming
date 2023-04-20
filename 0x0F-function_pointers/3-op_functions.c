#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers and returns the sum
 * @a: the first number.
 * @b: the second number.
 * Return: (a + b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers and returns the difference
 * @a: first input value
 * @b: second input value
 * Return: (a - b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers and return the results
 * @a: first input value
 * @b: second input value
 * Return: (a * b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers and return the difference
 * @a: first input value
 * @b: second input value
 * Return: (a / b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers and return the remainder
 * @a: first input value
 * @b: second input value
 * Return: remainder of (a / b)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
